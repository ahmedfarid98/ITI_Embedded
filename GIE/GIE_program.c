
/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : EXTI                                */
/* Date      : 13 SEP 2022                        */
/* Version   : V01                                */
/**************************************************/

#include "STD_TYPES.h"
#include "BIT_MATh.h"

#include "GIE_interface.h"
#include "GIE_register.h"


void GIE_voidEnable(void){
	
	SET_BIT(SREG_Register,SREG_I);	
}

void GIE_voidDisable(void){
	
	CLR_BIT(SREG_Register,SREG_I);
}