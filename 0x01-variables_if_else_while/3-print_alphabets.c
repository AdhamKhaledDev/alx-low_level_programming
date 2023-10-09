#include <stdio.h>
/**
 *main - Starting point
 *Discription: Prints lowercase and uppercase alphabet, one line
 *Return: Always should be 0
 */
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
char uppercase = 'A';
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}

