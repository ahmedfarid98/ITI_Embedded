/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : DIO                                */
/* Date      : 15 FEB 2022                        */
/* Version   : V01                                */
/**************************************************/

#ifndef _DIO_INT_H
#define _DIO_INT_H

/* Port Defines */
#define DIO_u8PORTA    0
#define DIO_u8PORTB    1
#define DIO_u8PORTC    2
#define DIO_u8PORTD    3

/* PIN Defines */
#define DIO_u8PIN0   0
#define DIO_u8PIN1   1
#define DIO_u8PIN2   2
#define DIO_u8PIN3   3
#define DIO_u8PIN4   4
#define DIO_u8PIN5   5
#define DIO_u8PIN6   6
#define DIO_u8PIN7   7


/* PIN Value Options */
#define DIO_u8PIN_HIGH   1
#define DIO_u8PIN_LOW    0


/* PORT Value Options */
#define DIO_u8PORT_LOW     0
#define DIO_u8PORT_HIGH    0xff

/* IO Pins */
void DIO_SetPinValue(u8 u8PortIdCopy , u8 u8PinIdCopy, u8 u8PinValCopy);

u8 DIO_GetPinValue(u8 u8PortIdCopy, u8 u8PinIdCopy);

/* Function Set_PinDirection() & Set_PortDirection() are removed from here after inplementing PORT Initialization Driver , PORT is an AutoSar Component*/

/* IO Ports */
void DIO_SetPortValue     (u8 u8PortId, u8 u8PortVal);

#endif