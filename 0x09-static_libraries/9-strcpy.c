#include "main.h"

/**
 * *_strcpy - duplicates the content of the string pointed to by src
 * along with the null-terminating character (\0)
 * into the buffer pointed to by dest
 * @dest: pointer to the buffer where the string is duplicated
 * @src: the string to be duplicated
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
