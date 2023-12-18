#ifndef __STM32L476G_LED_H
#define __STM32L476G_LED_H

#include "stm32l476xx.h"


// Modular function to initialize PA5 as an output pin, interfacing with the transistor.
void configure_transistor_pin();

// Modular function to turn on the transistor.
void turn_on_transistor();

// Modular function to turn off the transistor.
void turn_off_transistor();

#endif /* __STM32L476G_LED_H */