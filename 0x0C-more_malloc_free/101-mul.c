#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - Determines if a string is composed of digits
 * @argv: A pointer to the current item in the argument
 * Return: Returns 0 if all characters are digits, 1 if not all are digits.
 */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * _atoi - Converts a string of ASCII digits into their corresponding values
 * @s: A pointer to the source string
 * Return: The numerical value represented by the digits
 */
int _atoi(char *s)
{
	int i, result;

	i = result = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		i++;
	}
	return (result);
}
/**
 * main - The entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: Returns 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
