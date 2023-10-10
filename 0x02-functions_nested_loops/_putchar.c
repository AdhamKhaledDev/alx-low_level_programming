#include "main.h"
#include <unistd.h>
/**
 * _putchar - A function writes the character c to the standard output.
 * @c: It takes the character c as a parameter to print.
 *
 * Return: If the function is successful, it returns 1.
 * In case of an error, it returns -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
