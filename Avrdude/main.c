#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
    DDRD = 0b00000001;
    while(1)
    {
        PORTD = 0b00000001;
        _delay_ms(500);
        PORTD = 0b00000000;
        _delay_ms(1000);
    }
    return 0;
}
