#include <stdio.h>
void first(void) __attribute__ ((constructor));

/**
 * first - displays a sentence before the execution of the main function
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
