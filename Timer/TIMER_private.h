/**************************************************/
/* Author    : Ahmed Farid Hafez                  */


#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

#define  NORMAL_MODE      1
#define  PWM_Mode         2
#define  CTC_Mode         3
#define  FASTPWM_Mode     4

#define PRESCALING_MASK   0b11111000

#define TIMER_COUNTER_DISABLED       0
#define NO_PRESCALER  			     1
#define CLK_DIV_8  			         2
#define CLK_DIV_64  			     3
#define CLK_DIV_256 			     4
#define CLK_DIV_1024  			     5
#define EXT_CLK_FALLING_EDGE  	     6
#define EXT_CLK_RISNG_EDGE  	     7


#define OCR0_PIN_DISCONNECTED		 1
#define CLEAR_OCR0_ON_COMPARE		 2
#define SET_OCR0_ON_COMPARE			 3
#define TOGGLE_OCR0_ON_COMPARE		 4



#endif
