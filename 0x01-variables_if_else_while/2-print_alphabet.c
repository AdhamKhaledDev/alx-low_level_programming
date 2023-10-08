#include <stdio.h>
/**
 *main - Starting point
 *Discription: A program that prints the alphabet in lowercase
 *Return: Always should be 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
