#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int password[100];
    int i, total, remainder;

    total = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        password[i] = rand() % 78;
        total += (password[i] + '0');
        putchar(password[i] + '0');

        if ((2772 - total) - '0' < 78)
        {
            remainder = 2772 - total - '0';
            total += remainder;
            putchar(remainder + '0');
            break;
        }
    }

    return (0);
}
