/*
 * ADC.c
 *
 * Created: 06-03-2016 23:07:54
 * Author : Dishank
 */ 

#define F_CPU 12000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	uint8_t result; ......................................
    DDRB |= (1<<DDB3);
	DDRA = 0b00000000;
	ADMUX |= (1<<ADLAR) | (1<<REFS0);
	ADCSRA |= (1<<ADEN)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	
    while (1) 
    {
		ADCSRA |= (1<<ADSC);
		_delay_ms(100);
		result = ADCH;
		
		if (result>128)
		{
			PORTB|=(1<<PB3);
		} 
		else{
			PORTB = 0b00000000;
		}
		
		
    }
}

