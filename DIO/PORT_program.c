/***************************************************************/
/***************************************************************/
/*******************  Authot: Ahmed Farid   ********************/
/*******************  Layer : MCAL          ********************/
/*******************  SWC   : PORT          ********************/
/*******************  Date  : 20/2/ 2022    ********************/

#include "STD_TYPES.h"

#include "PORT_config.h"  /* Must come First B. private.h file depends ON IT .. */
#include "PORT_private.h"
#include "PORT_interface.h"
#include "PORT_register.h"

void PORT_voidInit(void){
	
	DDRA_Register = PORTA_DIR;
	DDRB_Register = PORTB_DIR;
	DDRC_Register = PORTC_DIR;
	DDRD_Register = PORTD_DIR;
	
	PORTA_Register = PORTA_INITIAL_VAL;
	PORTB_Register = PORTB_INITIAL_VAL;
	PORTC_Register = PORTC_INITIAL_VAL;
	PORTD_Register = PORTD_INITIAL_VAL;
}
