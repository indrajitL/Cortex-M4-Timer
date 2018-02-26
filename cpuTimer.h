/*
 * cpuTimer.h
 *
 *  Created on: 26-Feb-2018
 *      Author: root
 */

#ifndef CPUTIMER_H_
#define CPUTIMER_H_

#include <stdint.h>

#define IN  0U
#define OUT 1U

#define CORTEX_M4_PERIPH_BASE (0xE000E000UL)
#define PERIPH_BASE (0x40000000UL)
#define SysTick_Base (CORTEX_M4_PERIPH_BASE + 0x0010UL)

typedef struct {
    volatile uint32_t CTRL;
    volatile uint32_t LOAD;
    volatile uint32_t VAL;
    volatile uint32_t CALB;
}SysTick_Type;

#define SysTick  ((SysTick_Type*)SysTick_Base)



#endif /* CPUTIMER_H_ */
