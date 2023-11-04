#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string consists of only digits.
 * @str: The input string to check
 * Return: 1 if all characters are digits, 0 if not
 */
int is_digit(const char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiply two positive numbers.
 * @num1: The first positive number
 * @num2: The second positive number
 * Return: The result of the multiplication
 */
char *multiply(const char *num1, const char *num2)
{
    int len1 = 0, len2 = 0, len_result, i, j, carry = 0;
    char *result;

    while (num1[len1] != '\0')
        len1++;
    while (num2[len2] != '\0')
        len2++;

    len_result = len1 + len2;
    result = malloc(sizeof(char) * (len_result + 1));

    if (!result)
        return NULL;

    for (i = 0; i < len_result; i++)
        result[i] = '0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            int prod = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = prod / 10;
            result[i + j + 1] = (prod % 10) + '0';
        }
        result[i + j + 1] = carry + '0';
    }

    for (i = 0; i < len_result; i++)
        result[i] = result[i + (result[i] != '0')];
    result[len_result] = '\0';

    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    char *result = multiply(num1, num2);

    if (!result)
    {
        printf("Error\n");
        return 98;
    }

    printf("%s\n", result);
    free(result);

    return 0;
}
