#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
  for (int i = 0; dest[i] != '\0'; ++i) {}
  for (int j = 0; src[j] != '\0'; ++j) {
    dest[i] = src[j];
    ++i;
  }
  dest[i] = '\0';
  return (dest);
}