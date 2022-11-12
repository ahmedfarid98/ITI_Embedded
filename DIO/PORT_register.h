/***************************************************************/
/***************************************************************/
/*******************  Authot: Ahmed Farid   ********************/
/*******************  Layer : MCAL          ********************/
/*******************  SWC   : PORT          ********************/
/*******************  Date  : 20/2/2022     ********************/

#ifndef PORT_REGISTER_H_
#define PORT_REGISTER_H_

#define DDRA_Register   *((volatile u8*)0x3A)
#define DDRB_Register   *((volatile u8*)0x37)
#define DDRC_Register   *((volatile u8*)0x34)
#define DDRD_Register   *((volatile u8*)0x31)

#define PORTA_Register  *((volatile u8*)0x3B)
#define PORTB_Register  *((volatile u8*)0x38)
#define PORTC_Register  *((volatile u8*)0x35)
#define PORTD_Register  *((volatile u8*)0x32)

#endif
