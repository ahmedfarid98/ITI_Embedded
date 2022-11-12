/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : TIMER                              */
/* Date      : 12 Nov 2022                        */
/* Version   : V02                                */
/**************************************************/

#ifndef TIMER_REGISTER_H
#define TIMER_REGISTER_H

#define TCNT0_Register  *((volatile u8*)0x52)   /* Timer 0 Register */

#define OCR0_Register  *((volatile u8*)0x5C)    /* Output Compare Register */


#define TCCR0_Register  *((volatile u8*)0x53)   /* Timer0/Counter Control Register */ 
#define TCCR0_CS00   0 							/* Prescaler bit 0 */
#define TCCR0_CS01   1							/* Prescaler bit 1 */
#define TCCR0_CS02   2							/* Prescaler bit 2 */
#define TCCR0_WGM01  3							/* Waveform Generator bit  1 */
#define TCCR0_WGM00  6             				/* Waveform Generator bit  0 */
#define TCCR0_COM00  4 							/* Compare Output mode bit 0 */
#define TCCR0_COM01  5							/* Compare Output mode bit 1 */
#define TCCR0_FOC0   7							/* Force Output Compare bit */
 

#define TIMSK_Register  *((volatile u8*)0x59)   /* Timer/Counter Interrupt Mask Register*/
#define TIMSK_TOIE0  0                          /* Timer/Counter0 Output Compare Match Interrupt Enable */
#define TIMSK_OCIE0  1							/* Timer/Counter0 Overflow Interrupt Enable */

#define TIFR_Register  *((volatile u8*)0x58)             /* Timer/Counter Interrupt Flag Register */
#define TIFR_TOV0   0							/* Timer/Counter0 Overflow Flag */
#define TIFR_OCF0   1						    /* Output Compare Flag 0 */


#endif
