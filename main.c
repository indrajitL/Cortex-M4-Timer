
#include <stdint.h>
#include "cpuTimer.h"


void SysTick_isr(void);
void configure_timer(void);

/**
 * main.c
 */
uint32_t count;
uint32_t i=0;
int main(void)
{
    configure_timer();

    while(1)
    {

    }

}
void configure_timer(void)
{
    SysTick->CTRL |= (1U << 2U); // select clock source same as cpu clock
    SysTick->LOAD = 4998999; // set timer value
    SysTick->VAL = 0x01; // clear with any value
    SysTick->CTRL |= 1U << 1U; // enable timer interrupt
    SysTick->CTRL |= 1U << 0U; // enable timer

}

void SysTick_isr(void)
{
    count++;
}

