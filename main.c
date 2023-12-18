#include "stm32l476xx.h"
#include "ADC.h"
#include "button.h"
#include "transistor.h"
#include "Systick_timer.h"

int main(void){

	configure_EXTI();	
	configure_Push_Button_pin();
	configure_transistor_pin();
	// Initialize ADC: Set up ADC1 for sampling from external input channel PA1 (ADC1_IN6). 
	// Configure for 12-bit resolution, right data alignment, single-ended, continuous mode, 
	// and interrupt at the end of every conversion.

	// Modular function to initialize ADC
	ADC_Init();
	
	
	// After initialization, begin ADC conversion with a software trigger by setting ADSTART bit in ADC1_CR.
	//ADC1->CR |= ADC_CR_ADSTART;		
	
	while(1){ // background tasks
	}
}

