#include "main.h"
/**
* _isalpha - Verifies if a character is alphabetic.
* @c: The character to be examined.
* Return: 1 if 'c' is a letter, 0 otherwise.
*/
int _isalpha(int c);
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
