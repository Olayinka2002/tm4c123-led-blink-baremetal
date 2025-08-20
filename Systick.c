#include "tm4c123gh6pm.h"

void delay_ms(uint32_t ms) {
    // Configure SysTick
    SysTick->LOAD = 16000 - 1;   // 16 MHz clock ? 1 ms per tick
    SysTick->VAL = 0;            // Clear current value
    SysTick->CTRL = 5;           // Enable SysTick, no interrupts

    for(uint32_t i = 0; i < ms; i++) {
        while((SysTick->CTRL & 0x10000) == 0);  // Wait for COUNT flag
    }

    SysTick->CTRL = 0;  // Disable SysTick after delay
}
