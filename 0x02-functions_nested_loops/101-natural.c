#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int i;
        long int fib1 = 1, fib2 = 2, sum = 0;

        for (i = 1; i <= 32; i++)
        {
                if (fib2 % 2 == 0)
                        sum += fib2;
                fib2 = fib1 + fib2;
                fib1 = fib2 - fib1;
        }

        _putchar((sum / 1000000000) + '0');
        _putchar(((sum / 100000000) % 10) + '0');
        _putchar(((sum / 10000000) % 10) + '0');
        _putchar(((sum / 1000000) % 10) + '0');
        _putchar(((sum / 100000) % 10) + '0');
        _putchar(((sum / 10000) % 10) + '0');
        _putchar(((sum / 1000) % 10) + '0');
        _putchar(((sum / 100) % 10) + '0');
        _putchar(((sum / 10) % 10) + '0');
        _putchar((sum % 10) + '0');
        _putchar('\n');

        return (0);
}

