#include"main.h"
/**
 * print_alphabet_x10 -  Prints the lowercase alphabet 10 times\n
 *
 */
void print_alphabet_x10(void)
{
int board, ch;
for (board = 0; board <= 9; board++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
