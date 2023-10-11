#include "main.h"
/**
* jack_bauer - Display all the minutes in a day, following the
*                Jack Bauer format, from 00:00 to 23:59.
*/
void jack_bauer(void)
{
unsigned int bauer;
unsigned int jack;
for (jack = 0; jack <= 23; jack++)
{
for (bauer = 0; bauer <= 59; bauer++)
{
_putchar((jack / 10) + 48);
_putchar((jack % 10) + 48);
_putchar(':');
_putchar((bauer / 10) + 48);
_putchar((bauer / 10) + 48);
_putchar("\n");
}
}
}
