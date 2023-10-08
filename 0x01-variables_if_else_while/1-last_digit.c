#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Starting point
 *Discription: classifies digits as >5, 0, or <6 and not 0.
 *Return: Always should be 0
 */
int main(void)
{
int n;
int zd; /* Z Digit (Last) */
srand(time(0));
n = rand() - RAND_MAX / 2;
zd = n % 10;

if (zd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, zd);
}
else if (zd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, zd);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, zd);
}
	return (0);
}
