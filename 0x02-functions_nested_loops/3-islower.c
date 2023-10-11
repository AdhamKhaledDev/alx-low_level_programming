#include "main.h"
/**
* _islower - Determine whether a character is in lowercase.
* @c: The character to be examined.
* Return: 1 if the character is in lowercase, or 0 otherwise.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
