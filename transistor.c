#include "stm32l476xx.h"

#define transistor_pin    5

// PA5  <--> Water Pump
// Pin PA5 outputs a sufficient voltage to the base of the BJT, switching the transistor and pump on and off

// Configuring pin PA5.
void configure_transistor_pin(){
  // 1. Enable the clock to GPIO Port A	
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;   
		
	// 2. Configure GPIO Mode to 'Output': Input(00), Output(01), AlterFunc(10), Analog(11)
	GPIOA->MODER &= ~(3UL<<(2*transistor_pin));  
	GPIOA->MODER |=   1UL<<(2*transistor_pin);      // Output(01)

	// 3. Configure GPIO Output Type to 'Push-Pull': Output push-pull (0), Output open drain (1) 
	GPIOA->OTYPER &= ~(1<<transistor_pin);      // Push-pull
	
	// 4. Configure GPIO Push-Pull to 'No Pull-up or Pull-down': No pull-up, pull-down (00), Pull-up (01), Pull-down (10), Reserved (11)
	GPIOA->PUPDR  &= ~(3<<(2*transistor_pin));  // No pull-up, no pull-down
}


// Modular function to turn on the transistor.
void turn_on_transistor(){
	GPIOA->ODR |= (1 << transistor_pin);
}

// Modular function to turn off the transistor.
void turn_off_transistor(){
	GPIOA->ODR &= ~(1 << transistor_pin);
}



