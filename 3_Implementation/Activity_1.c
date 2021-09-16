#include "Activity_1.h"

void Activity_1_init(){
    DDRB = DDRB |(1<<PB0);
    PORTB = PORTB & ~(1<<PB0);
    //Set D0 Low as Input and than initialize high
    DDRD = DDRD & ~(1<<PD0);
    PORTD = PORTD|(1<<PD0);
    //Set D1 Low as Input and than initialize high
    DDRD = DDRD & ~(1<<PD1);
    PORTD = PORTD |(1<<PD1);
}
