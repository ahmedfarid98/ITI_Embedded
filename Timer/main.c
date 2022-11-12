#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "PORT_interface.h"
#include "DIO_Interface.h"
#include "GIE_interface.h"
#include "TIMER_interface.h"
#include "TIMER_config.h"
#include "TIMER_register.h"


void LED1_Toggle(void);

//void LED2_Toggle(void);  // Used in TimerOverFlow Mode

void main(){

	// Initialize the Port
	PORT_voidInit();

	// Initialize the Timer Peripheral
	TIMER0_voidInit();

	// Initialize the Global Interrupt Enable
	GIE_voidEnable();

	OCR0_Register = 250;
	TIMER0_u8_SetCallBackCM(&LED1_Toggle);

	//TCNT0_Register = 224;
	//TIMER0_u8_SetCallBack(&LED2_Toggle);

	while(1){


	}
}

// ISR To toggle a LED Every one second using compare match mode
void LED1_Toggle(void){

	// Following two variables are saved as static to maintain it's values every time you enter the ISR Bode loop
	static u16 local_u16Counter_1 = 0;
	static u16 local_u16LED_State_1 = 0;

	local_u16Counter_1 ++;

	if(local_u16Counter_1 == 4000){
		TOG_BIT(local_u16LED_State_1,0);
		DIO_SetPinValue(DIO_u8PORTC,DIO_u8PIN0,DIO_u8PIN_HIGH);
		OCR0_Register = 250;
		local_u16Counter_1=0;
	}


}

/* Function below is the ISR of the TimerOverFlow Mode.

// ISR To toggle a LED Every 0.5 second using Timer overFlow Event , system clk = 8 Mhz , 8 bit timer , Prescaler = 8
// system tick = 8 / 8 = 1 Microseconds  ,, overflow time = 1 * 256 = 256 Ms
// No. of overflows = req_time / over_flow time = 0.5 / 256*10e-6 = 1953.125
// preloaded value in TCNT = 256(1-0.125) = 224
void LED2_Toggle(void){

	// Following two variables are saved as static to maintain it's values every time you enter the ISR Bode loop
	static u16 local_u16Counter_2 = 0;
	static u16 local_u16LED_State_2 = 0;

	local_u16Counter_2 ++;

	if(local_u16Counter_2 == 1954){
		TOG_BIT(local_u16LED_State_2,0);
		DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN1,DIO_u8PIN_HIGH);
		local_u16Counter_2=0;

	}


}

*/
