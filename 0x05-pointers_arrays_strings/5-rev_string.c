#include "main.h"

/**
 * rev_string - changes the order of characters in a string to reverse it
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int index, length, end;

	length = 0;
	end = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	for (index = 0; index < length / 2; index++)
	{
		temp = s[index];
		s[index] = s[end];
		s[end--] = temp;
	}
}
