/*
 * Fade LED.c
 *
 * Created: 06-03-2016 18:13:35
 * Author : Dishank
 */ 
#define F_CPU 12000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB |= (1<<DDB3); 
    TCCR0 |= (1<<WGM01) | (1<<WGM00) | (1<<COM01) | (1<<CS02) | (1<<CS00);
	while (1) 
    {
		for (OCR0 = 0; OCR0<256; OCR0+=20)
		{
			_delay_ms(500);
		}
    }
}

