#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main ()
{
    DDRD = 0xFF;
    while(1)
    {
        PORTD = PORTD | (1 << 3);
        _delay_ms(100);
        PORTD = PORTD & (~(1 << 3));
        _delay_ms(100);
    }
    return (0);
}
