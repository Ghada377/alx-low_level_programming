#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0, temp;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		temp = fib1;
		fib1 = fib2;
		fib2 += temp;
	}

	printf("%lu\n", sum);

	return (0);
}

