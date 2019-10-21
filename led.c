#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 50

int main(void) {
  /* set pin 5 of PORTB for output*/
  // DDRB |= _BV(DDB5);
  DDRB = 0x11111110;
  while (1) {
    /* set pin 5 high to turn led on */
    PORTB = ~PORTB;
    _delay_ms(BLINK_DELAY_MS);
    // PORTB |= _BV(PORTB5);
    // _delay_ms(BLINK_DELAY_MS);

		/* set pin 5 low to turn led off */
    // PORTB &= ~_BV(PORTB5);
    // _delay_ms(BLINK_DELAY_MS);
  }
  return 0;
}