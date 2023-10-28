#include "main.h"
/**
* _isalpha - Verifies if a character is alphabetic.
* @c: The character to be examined.
* Return: 1 if 'c' is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
