#ifndef ACTIVITY_1_H_INCLUDED
#define ACTIVITY_1_H_INCLUDED
#include <avr/io.h>
#define LED_ON (PORTB |= (1<<PB0))  //LED ON
#define LED_OFF (PORTB &=~(1<<PB0))   //LED OFF
#define Sensor_on !(PIND&(1<<PD1)) // Push Button ON
#define Heater_on !(PIND&(1<<PD0))  // Switch ON

void Activity_1_init();


#endif
