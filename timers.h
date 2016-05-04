#ifndef TIMERS_H
#define TIMERS_H
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/atomic.h>
#include <inttypes.h>


void timer0_Init(void);
unsigned long millis(void);

#endif //TIMERS_H