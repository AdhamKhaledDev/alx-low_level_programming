#include "main.h"

/**
 * _puts - outputs a string to the standard output
 * @str: a pointer to the string to be displayed
 */
void _puts(char *str)
{
	int index = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
