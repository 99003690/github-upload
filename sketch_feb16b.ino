#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>

unsigned volatile FLAG=0;
unsigned volatile FLAG1=0;
unsigned volatile FLAG2=0;

int main(void)
{
  /*****for LED***********/
  DDRB|=(1<<PB0);
  DDRD|=(1<<PD7);
  DDRD|=(1<<PD6);
  /**********for switch********/
  DDRD&=~(1<<PD2); //clear
  PORTD|=(1<<PD2); //set
  
  DDRD&=~(1<<PD3);
  PORTD|=(1<<PD3);

  DDRC&=~(1<<PC0);
  PORTC|=(1<<PC0);
  
  EICRA&=~(1<<ISC01);
  EICRA|=(1<<ISC00);
  EIMSK|=(1<<INT0);
  
  EICRA&=~(1<<ISC11);
  EICRA|=(1<<ISC10);
  EIMSK|=(1<<INT1);

  PCICR|=(1<<PCIE1);
  PCMSK1|=(1<<PCINT8);
  
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
    if(FLAG2==1)
    {
      PORTD|=(1<<PD6);
      _delay_ms(200);
      FLAG2=0;
    }
    else
    {
      PORTB&=~(1<<PB0);
      PORTD&=~(1<<PD7);
      PORTD&=~(1<<PD6);
      _delay_ms(200);
    }
  }
}
ISR(INT0_vect)
{
  FLAG^=(~FLAG);
}
ISR(INT1_vect)
{
  FLAG1^=(~FLAG1);
}
ISR(PCINT1_vect)
{
  FLAG2^=(~FLAG2);
}
