/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : DIO                                */
/* Date      : 15 FEB 2022                        */
/* Version   : V01                                */
/**************************************************/

#ifndef _DIO_REG_H
#define _DIO_REG_H

/* Group A Registers */
#define PORTA_Register  *((volatile u8*)0x3B)
#define PINA_Register   *((volatile u8*)0x39)

/* Group B Registers */
#define PORTB_Register  *((volatile u8*)0x38)
#define PINB_Register   *((volatile u8*)0x36)

/* Group C Registers */
#define PORTC_Register  *((volatile u8*)0x35)
#define PINC_Register   *((volatile u8*)0x33)

/* Group D Registers */
#define PORTD_Register  *((volatile u8*)0x32)
#define PIND_Register   *((volatile u8*)0x30)


#endif
