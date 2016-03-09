/*
 * LED Pattern.c
 *
 * Created: 06-03-2016 17:47:19
 * Author : Dishank
 */ 

#define F_CPU 12000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0b11111111;
	PORTB = 0b00000000;
	int x;
    while (1) 
    {
		for (x=0;x<7; x++)
		{
			PORTB |= (1<<x)|(1<<(7-x));
			_delay_ms(1000);
			PORTB = 0b00000000; 
		}
    }
}

