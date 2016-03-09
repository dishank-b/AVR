/*
 * Interrupt.c
 *
 * Created: 09-03-2016 15:44:32
 * Author : Dishank
 */ 

#define F_CPU 12000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


int main(void)
{
    DDRD = 0b00000000; // setting PD2 as input
	PORTD |= (1<<PD2); // PULLING UP PD2
	DDRC |= (1<<DDC0);
	PORTC |= (1<<PC0);
	MCUCR |= (0<<ISC01) | (1<<ISC00);
	GICR |= (1<<INT0) | (1<<INT1) | (1<<INT2);
	sei();
    while (1) 
    {
		
    }
}

ISR(INT0_vect){
	PORTC &= ~(1<<PC0);   //  or use PORTB ^= (1<<PB0);
	_delay_ms(1000);      //  _delay_ms(1000)
	PORTC |= 1<<PC0;
	_delay_ms(1000);
	
}