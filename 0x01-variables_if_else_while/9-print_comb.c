#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers, separated by a comma and a space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
