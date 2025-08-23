#include "TM4C123GH6PM.h"

void delay_ms(uint32_t ms) {
    // Configure SysTick
    SysTick->LOAD = 16000 - 1;   // 16 MHz clock ? 1 ms per tick
    SysTick->VAL = 0;            // Clear current value
    SysTick->CTRL = 5;           // Enable SysTick, no interrupts(The counts starts from 16000 down to 0

    for(uint32_t i = 0; i < ms; i++) {
        while((SysTick->CTRL & 0x10000) == 0);  // Wait for the counter to reach 0
    }

    SysTick->CTRL = 0;  // Disable SysTick after delay
}
