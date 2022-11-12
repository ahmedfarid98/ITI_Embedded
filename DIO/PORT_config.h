/***************************************************************/
/***************************************************************/
/*******************  Authot: Ahmed Farid   ********************/
/*******************  Layer : MCAL          ********************/
/*******************  SWC   : PORT          ********************/
/*******************  Date  : 20/2/2022     ********************/

#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

/* Choose: 0 for Input
		   1 for OUTPUT  */

#define PORTA_PIN0_DIR		   0
#define PORTA_PIN1_DIR         0
#define PORTA_PIN2_DIR         0
#define PORTA_PIN3_DIR         0
#define PORTA_PIN4_DIR         0
#define PORTA_PIN5_DIR         0
#define PORTA_PIN6_DIR         0
#define PORTA_PIN7_DIR         0

#define PORTB_PIN0_DIR		   0
#define PORTB_PIN1_DIR         0
#define PORTB_PIN2_DIR         0
#define PORTB_PIN3_DIR         0
#define PORTB_PIN4_DIR         0
#define PORTB_PIN5_DIR         0
#define PORTB_PIN6_DIR         0
#define PORTB_PIN7_DIR         0

#define PORTC_PIN0_DIR		   1
#define PORTC_PIN1_DIR         1
#define PORTC_PIN2_DIR         1
#define PORTC_PIN3_DIR         1
#define PORTC_PIN4_DIR         1
#define PORTC_PIN5_DIR         1
#define PORTC_PIN6_DIR         1
#define PORTC_PIN7_DIR         1

#define PORTD_PIN0_DIR		   0
#define PORTD_PIN1_DIR         0
#define PORTD_PIN2_DIR         1
#define PORTD_PIN3_DIR         0
#define PORTD_PIN4_DIR         0
#define PORTD_PIN5_DIR         0
#define PORTD_PIN6_DIR         0
#define PORTD_PIN7_DIR         0


/*Setting PIN VALUE : 
	if Pin is Output : Choose : 1 > for HIGH 
								0 > for  LOW  
								
	if Pin is INPUT  : Choose : 1 > for activating PULL UP : In this state, the DIO pin has 2 states only, 0 when connected to GND, 
									1 when connected to VCC or when not connected to anything  
								0 > for floating Input ,, In this state, the DIO pin has 3 states  :  0 when connected to GND, 
								    1 when connected to VCC, floating when not connected to anything which may be read as 0 or as 1*/

#define PORTA_PIN0_INITIAL_VAL		   0
#define PORTA_PIN1_INITIAL_VAL         0
#define PORTA_PIN2_INITIAL_VAL         0
#define PORTA_PIN3_INITIAL_VAL         0
#define PORTA_PIN4_INITIAL_VAL         0
#define PORTA_PIN5_INITIAL_VAL         0
#define PORTA_PIN6_INITIAL_VAL         0
#define PORTA_PIN7_INITIAL_VAL         0

#define PORTB_PIN0_INITIAL_VAL		   0
#define PORTB_PIN1_INITIAL_VAL         0
#define PORTB_PIN2_INITIAL_VAL         0
#define PORTB_PIN3_INITIAL_VAL         0
#define PORTB_PIN4_INITIAL_VAL         0
#define PORTB_PIN5_INITIAL_VAL         0
#define PORTB_PIN6_INITIAL_VAL         0
#define PORTB_PIN7_INITIAL_VAL         0

#define PORTC_PIN0_INITIAL_VAL		   0
#define PORTC_PIN1_INITIAL_VAL         0
#define PORTC_PIN2_INITIAL_VAL         0
#define PORTC_PIN3_INITIAL_VAL         0
#define PORTC_PIN4_INITIAL_VAL         0
#define PORTC_PIN5_INITIAL_VAL         0
#define PORTC_PIN6_INITIAL_VAL         0
#define PORTC_PIN7_INITIAL_VAL         0

#define PORTD_PIN0_INITIAL_VAL		   0
#define PORTD_PIN1_INITIAL_VAL         0
#define PORTD_PIN2_INITIAL_VAL         0
#define PORTD_PIN3_INITIAL_VAL         0
#define PORTD_PIN4_INITIAL_VAL         0
#define PORTD_PIN5_INITIAL_VAL         0
#define PORTD_PIN6_INITIAL_VAL         0
#define PORTD_PIN7_INITIAL_VAL         0

#endif
