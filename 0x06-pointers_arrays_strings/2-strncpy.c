#include "main.h"
/**
 * _strncpy - Copy a string with a character limit.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
