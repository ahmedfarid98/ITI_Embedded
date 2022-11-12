/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : TIMER                              */
/* Date      : 30 OCT 2022                        */
/* Version   : V01                                */
/**************************************************/

#include "STD_TYPES.h"
#include "BIT_MATh.h"

#include "TIMER_interface.h"
#include "TIMER_register.h"
#include "TIMER_private.h"
#include "TIMER_config.h"

// Creating Global pointer to void function to be used in callBackFunc() below, must be static b. i want this pointer to be global scope in the project.
static void (*TIMER0_u8_CompareSetCallBack)(void);

//static void (*TIMER0_u8_OverFlowSetCallBack)(void);

void TIMER0_voidInit(void){

#if MODE_OF_OPERATION == NORMAL_MODE
	CLR_BIT(TCCR0_Register,TCCR0_WGM00);
	CLR_BIT(TCCR0_Register,TCCR0_WGM01);

#elif MODE_OF_OPERATION == PWM_Mode
	SET_BIT(TCCR0_Register,TCCR0_WGM00);
	CLR_BIT(TCCR0_Register,TCCR0_WGM01);

#elif MODE_OF_OPERATION == CTC_Mode
	CLR_BIT(TCCR0_Register,TCCR0_WGM00);
	SET_BIT(TCCR0_Register,TCCR0_WGM01);

#elif MODE_OF_OPERATION == FASTPWM_Mode
	CLR_BIT(TCCR0_Register,TCCR0_WGM00);
	SET_BIT(TCCR0_Register,TCCR0_WGM01);

#else
#error " Wrong Choose of mode of operation "
#endif

	// Enable Timer overflow Interrupt
	//SET_BIT(TIMSK_Register,TIMSK_TOIE0);

	// Choose Prescaling using Bit Masking Method , First Claer the required set bit and then set it with required values.
	TCCR0_Register &= PRESCALING_MASK;
	TCCR0_Register |= PRESCALING_MODE;


	// Enabling the timer preferred to be in end of initizalization function
	// Enable Counter compare match Interrupt
	SET_BIT(TIMSK_Register,TIMSK_OCIE0);

}


u8 TIMER0_u8_SetCallBackCM(void (*copy_pvCallBackFunc)(void)){

	u8 LocalErrorStatus = OK;
	if(copy_pvCallBackFunc != NULL){
		TIMER0_u8_CompareSetCallBack = copy_pvCallBackFunc;
	}

	else{
		LocalErrorStatus = NULL_POINTER;
	}
	return LocalErrorStatus;
}


// Creating ISR of Output Comapre match interrupt , we subtract one from vector table number b. it numbered from one and actually they are numbered from 0
void __vector_10 (void) __attribute__((signal));
void __vector_10 (void){
	if(TIMER0_u8_CompareSetCallBack != NULL){
		TIMER0_u8_CompareSetCallBack();
	}

}

/*
u8 TIMER0_u8_SetCallBackOV(void (*copy_pvCallBackFunc)(void)){

	u8 LocalErrorStatus = OK;
	if(copy_pvCallBackFunc != NULL){
		TIMER0_u8_OverFlowSetCallBack = copy_pvCallBackFunc;
	}

	else{
		LocalErrorStatus = NULL_POINTER;
	}
	return LocalErrorStatus;
}

// Creating ISR of Timer Overflow interrupt , we subtract one from vector table number b. it numbered from one and actually they are numbered from 0
void __vector_11 (void) __attribute__((signal));
void __vector_11 (void){
	if(TIMER0_u8_OverFlowSetCallBack != NULL){
		TIMER0_u8_OverFlowSetCallBack();
	}

}
*/
