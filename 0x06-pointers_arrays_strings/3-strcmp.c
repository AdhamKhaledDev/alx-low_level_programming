#include "main.h"

/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: A value less than 0 if s1 is lexicographically less than s2,
 * 0 if they are lexicographically equal, or a value greater than 0 if s1
 * is lexicographically greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return 0;
}
s1++;
s2++;
}
return (*s1 - *s2);
}
