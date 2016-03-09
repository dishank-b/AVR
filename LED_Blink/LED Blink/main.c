/*
 * LED Blink.c
 *
 * Created: 06-03-2016 14:35:27
 * Author : Dishank
 */ 


#define F_CPU 12000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{ 
	DDRC |= 1<<DDC0;
	PORTC |= 1<<PC0; 
    while (1) 
    {
		PORTC &= ~(1<<PC0);   //  or use PORTB ^= (1<<PB0);
		_delay_ms(1000);      //  _delay_ms(1000)
		PORTC |= 1<<PC0;
		_delay_ms(1000);
		
    }
}

