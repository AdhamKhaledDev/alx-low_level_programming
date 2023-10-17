#include "main.h"

/**
 * puts2 - displays every second character of a string, and adds a new line
 * @str: the string to extract characters from
 */
void puts2(char *str)
{
	int length, index;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
