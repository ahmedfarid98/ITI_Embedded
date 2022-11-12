/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : DIO                                */
/* Date      : 15 FEB 2022                        */
/* Version   : V01                                */
/**************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
#include "DIO_Register.h"

/* IO Pins */
void DIO_SetPinValue(u8 u8PortIdCopy , u8 u8PinIdCopy, u8 u8PinValCopy)
{
	/* Make sure that the Port ID and Pin ID are in the valid range */ /*for protection*/
	if ((u8PortIdCopy <= DIO_u8PORTD) && (u8PinIdCopy <= DIO_u8PIN7))
	{
		if (u8PinValCopy == DIO_u8PIN_HIGH)
		{
			/* Check on the Required PORT Number */
			switch (u8PortIdCopy)
			{
			case DIO_u8PORTA: SET_BIT(PORTA_Register,u8PinIdCopy); break;
			case DIO_u8PORTB: SET_BIT(PORTB_Register,u8PinIdCopy); break;
			case DIO_u8PORTC: SET_BIT(PORTC_Register,u8PinIdCopy); break;
			case DIO_u8PORTD: SET_BIT(PORTD_Register,u8PinIdCopy); break;
			}

		}

		else if (u8PinValCopy == DIO_u8PIN_LOW)
		{
			/* Check on the Required PORT Number */
			switch (u8PortIdCopy)
			{
			case DIO_u8PORTA: CLR_BIT(PORTA_Register,u8PinIdCopy); break;
			case DIO_u8PORTB: CLR_BIT(PORTB_Register,u8PinIdCopy); break;
			case DIO_u8PORTC: CLR_BIT(PORTC_Register,u8PinIdCopy); break;
			case DIO_u8PORTD: CLR_BIT(PORTD_Register,u8PinIdCopy); break;
			}
		}

		else
		{
			/* Do nothing, Wrong value to set */
		}
	}

	else
	{
		/* Do nothing, Error in the Pin ID or PORT ID */
	}
}

u8 DIO_GetPinValue(u8 u8PortIdCopy, u8 u8PinIdCopy)
{
	/* Define Local Variable to get the BIT Value */
	u8 u8ResultLocal;
	/* Make sure that the Port ID and Pin ID are in the valid range */
	if ((u8PortIdCopy <= DIO_u8PORTD) && (u8PinIdCopy <= DIO_u8PIN7))
	{
		/* Check on the Required PORT Number */
		switch (u8PortIdCopy)
		{
		case DIO_u8PORTA: u8ResultLocal= GET_BIT(PINA_Register,u8PinIdCopy); break;
		case DIO_u8PORTB: u8ResultLocal= GET_BIT(PINB_Register,u8PinIdCopy); break;
		case DIO_u8PORTC: u8ResultLocal= GET_BIT(PINC_Register,u8PinIdCopy); break;
		case DIO_u8PORTD: u8ResultLocal= GET_BIT(PIND_Register,u8PinIdCopy); break;
		}
	}

	else
	{
		/* return 0xff in case of error in the Pin ID or PORT ID */
		u8ResultLocal = 0xFF;
	}

	return u8ResultLocal;
}



/* IO Ports */
void DIO_SetPortValue (u8 u8PortId, u8 u8PortVal)
{
	/* Check on the Required PORT Number */
	switch (u8PortId)
	{
	case     DIO_u8PORTA: PORTA_Register = u8PortVal; break;
	case     DIO_u8PORTB: PORTB_Register = u8PortVal; break;
	case     DIO_u8PORTC: PORTC_Register = u8PortVal; break;
	case     DIO_u8PORTD: PORTD_Register = u8PortVal; break;
	default: /* Wrong Port ID */        break;
	}
}
