#include "main.h"
/**
* times_table - Print the 9 times table.
*/
void times_table(void)
{
int row, column, product;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if (column == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if (product < 10)
{
_putchar(' ');
_putchar('0' + product);
}
else
{
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
}
}
_putchar('\n');
}
}
