#include <stdio.h>

/**
 * main - Starting point
 *
 * Description: Prints lowercase and uppercase alphabet, one line
 *
 * Return: Always should be 0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
