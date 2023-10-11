#include "main.h"
/**
* print_last_digit - Display the last digit of an integer.
* @r: The integer from which the last digit is extracted.
* Return: The value of the last digit.
*/
int print_last_digit(int r)
{
int a;
if (r < 0)
r = -r;
a = r % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
