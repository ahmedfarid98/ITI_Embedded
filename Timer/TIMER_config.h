/**************************************************/
/* Author    : Ahmed Farid Hafez                  */
/* Layer     : MCAL layer                         */
/* Component : TIMER                              */
/* Date      : 30 OCT 2022                        */
/* Version   : V01                                */
/**************************************************/


#ifndef TIMER_CONFIG_H
#define TIMER_CONFIG_H

/* Modes of Operation Options , Copy and Paste your options:
 * 1. NORMAL_MODE
 * 2. PWM_Mode
 * 3. CTC_Mode
 * 4. FASTPWM_Mode */
#define MODE_OF_OPERATION 		CTC_Mode

/* Prescaling Options , Copy and Paste your options:
 * 1. TIMER_COUNTER_DISABLED
 * 2. NO_PRESCALER
 * 3. CLK_DIV_8
 * 4. CLK_DIV_64
 * 5. CLK_DIV_256
 * 6. CLK_DIV_1024
 * 7. EXT_CLK_FALLING_EDGE
 * 8. EXT_CLK_RISNG_EDGE */
#define PRESCALING_MODE  		CLK_DIV_8

#define COMPARE_OUTPUT_MODE     OCR0_PIN_DISCONNECTED


#endif
