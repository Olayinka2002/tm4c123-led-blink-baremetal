#include "TM4C123GH6PM.h"

void LED_Init(){
	//We want to use Port A
	SYSCTL -> RCGCGPIO |= 0x01;
	//Now we want to configure the different part of the board that allows for the blinm
	GPIOA -> DIR |= 0x08;
	GPIOA -> AFSEL &= ~0x08;
	GPIOA -> DEN |= 0x08;
	GPIOA -> DATA &= ~0x08;
}


void toggle(uint8_t led_value){
		GPIOA -> DATA ^= led_value;
}

