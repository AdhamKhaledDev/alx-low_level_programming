#include "main.h"

/**
 * print_rev - displays a string in reverse, and then adds a new line
 * @s: the string to be shown in reverse
 */
void print_rev(char *s)
{
	int index, reverseIndex, length;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	length = index;

	for (reverseIndex = length - 1; reverseIndex >= 0; reverseIndex--)
	{
		_putchar(s[reverseIndex]);
	}

	_putchar('\n');
}
