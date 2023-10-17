#include "main.h"

/**
 * _atoi - transforms a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer derived from the string
 */
int _atoi(char *s)
{
	int i = 0, digit = 0, result = 0, len = 0, minusCount = 0, foundDigit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && foundDigit == 0)
	{
		if (s[i] == '-')
			minusCount++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (minusCount % 2)
				digit = -digit;
			result = result * 10 + digit;
			foundDigit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			foundDigit = 0;
		}
		i++;
	}

	if (foundDigit == 0)
		return 0;

	return result;
}
