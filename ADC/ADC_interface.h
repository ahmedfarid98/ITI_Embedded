/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : ADC                              */
/* Date      : 12 NOV 2022                        */
/* Version   : V01                                */
/**************************************************/

#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

void ADC_voidinit(void);

u8 ADC_StartConversionSync(u8 Copychannel,u8 * CopyADC_Reading);


u8 ADC_StartConversionAsync(u8 Copychannel,u8 * CopyADC_ReadingResult , void (*copy_pvCallBackFunc)(void));



#endif
