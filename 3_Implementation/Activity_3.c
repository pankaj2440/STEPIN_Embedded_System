#include"Activity_3.h"
#include <avr/io.h>
#include<util/delay.h>

void PWM_init(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char PWM (uint16_t ADC_val)
{
    char tempe;

    if((ADC_val>=0) && (ADC_val<=209)){

        OCR1A  = 205; //20% duty cycle
        tempe = 20;
        _delay_ms(20);
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A  = 410; //40% duty cycle
        tempe = 25;
       _delay_ms(20);
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A  = 717;//70% duty cycle
        tempe = 29;
        _delay_ms(20);
    }
    else if((ADC_val>=710) && (ADC_val<=1024)){

        OCR1A  = 973; //95% duty cycle
        tempe = 33;
        _delay_ms(20);
    }
    else{
        OCR1A  = 0; //0% output
        tempe = 0;
    }
    return tempe;
}
