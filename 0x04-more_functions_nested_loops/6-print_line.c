#include "main.h"
/**
 * print_line - Outputs a continuous horizontal line in the terminal.
 * @n: The number of times the character '_' is printed.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
