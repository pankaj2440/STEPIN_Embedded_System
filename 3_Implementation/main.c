#include <avr/io.h>
#include<util/delay.h>

#include "Activity_1.h" // B 3, B 2 as input pins, B 0 as output pin to high
#include "Activity_2.h" // AC0 is used as input to vary temperature
#include "Activity_3.h" // OCR1A  B 1 to output PWM signal
#include "Activity_Final.h" // UART0 is used to actuate the amount of heat

int main(void)
{
    Activity_1_init();  // Activity_1
    ADConverter_init();// Activity_2
    PWM_init();         // Activity_3
    UART_init(100);     // Activity_Final
    uint16_t temp;
    char temp1;
    while(1){
    if(Sensor_on) {       // Switch_1 ON
    if(Heater_on) {    // Switch_2 ON
    LED_ON;         // LED ON
    temp=Read_ADC(0);
    temp1=PWM(temp);
    Write_UART(temp1);
    }}
    else {
    LED_OFF;
    OCR1A  =0;
}}
   return 0;
}
