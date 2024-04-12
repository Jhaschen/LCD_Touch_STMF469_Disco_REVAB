#include "mbed.h"
#include "LCD_DISCO_F469NI.h"


LCD_DISCO_F469NI lcd;
DigitalOut led1(LED1) ;
int main()
{
    lcd.DisplayStringAt(0, LINE(5), (uint8_t *)"Moin", CENTER_MODE);
     ThisThread::sleep_for(1s);
    while(1)
    {
      
        ThisThread::sleep_for(100ms);
    }

    
}