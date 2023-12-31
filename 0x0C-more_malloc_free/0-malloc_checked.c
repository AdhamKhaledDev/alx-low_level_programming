#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
