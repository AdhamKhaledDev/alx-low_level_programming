#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string to be measured
 *
 * Return: the length of the provided string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}
