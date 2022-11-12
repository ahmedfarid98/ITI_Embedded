/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : TIMER                              */
/* Date      : 30 OCT 2022                        */
/* Version   : V01                                */
/**************************************************/

#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H

// Functions to initialize Timer0
void TIMER0_voidInit(void);

// Call Back function When Timer Interrupt Occur (ISR) , takes an input argument pointer to function
u8 TIMER0_u8_SetCallBackCM(void (*copy_pvCallBackFunc)(void));

// Call Back function When Timer Interrupt Occur (ISR) , takes an input argument pointer to function
u8 TIMER0_u8_SetCallBackOV(void (*copy_pvCallBackFunc)(void));


#endif
