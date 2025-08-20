#include "TM4C123GH6PM.h"
#include "LED.h"
#include "Systick.h"
int main(void){
	LED_Init();	
	while(1){
		toggle(0x08);
		delay_ms(500);
	}
}