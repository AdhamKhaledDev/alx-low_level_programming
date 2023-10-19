#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: The target string to which data will be added
 * @src: The string providing the data
 * @n: The count of bytes from 'src' to append
 *
 * Return: A pointer to the modified 'dest' string
 */
char *_strncat(char *dest, const char *src, int n)
{
int j,i = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
