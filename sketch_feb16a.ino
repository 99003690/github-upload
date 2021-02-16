#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>

unsigned volatile FLAG=0;
unsigned volatile FLAG1=0;

int main(void)
{
  /*****for LED***********/
  DDRB|=(1<<PB0);
  DDRD|=(1<<PD7);
  /**********for switch********/
  DDRD&=~(1<<PD2); //clear
  PORTD|=(1<<PD2); //set
  
  DDRD&=~(1<<PD3);
  PORTD|=(1<<PD3);
  
  EICRA&=~(1<<ISC01);
  EICRA|=(1<<ISC00);
  EIMSK|=(1<<INT0);
  
  EICRA&=~(1<<ISC11);
  EICRA|=(1<<ISC10);
  EIMSK|=(1<<INT1);
  
  sei();
  while(1)
  {
    if(FLAG==1)
    {
      PORTB|=(1<<PB0);
      _delay_ms(200);
      FLAG=0;
    }
    if(FLAG1==1)
    {
    PORTD|=(1<<PD7);
    _delay_ms(200);
    FLAG1=0;
    }
    else
    {
      PORTB&=~(1<<PB0);
      PORTD&=~(1<<PD7);
      _delay_ms(200);
    }
  }
}
ISR(INT0_vect)
{
  FLAG=1;
}
ISR(INT1_vect)
{
  FLAG1=1;
}
