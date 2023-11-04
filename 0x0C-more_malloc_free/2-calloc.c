#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte
 * @s: The memory area to be filled
 * @b: The character to be copied
 * @n: The number of times to copy b
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *memory;

    if (nmemb == 0 || size == 0)
        return (NULL);

    memory = malloc(size * nmemb);

    if (memory == NULL)
        return (NULL);

    _memset(memory, 0, nmemb * size);

    return (memory);
}
