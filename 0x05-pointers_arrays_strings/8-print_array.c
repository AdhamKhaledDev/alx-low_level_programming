#include <stdio.h>
#include "main.h"

/**
 * print_array - shows the first n elements of an integer array followed by \n
 * @a: the array to be displayed
 * @n: the number of elements to show
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
