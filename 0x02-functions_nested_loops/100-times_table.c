#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which to print the times table (0 <= n <= 15).
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
				_putchar('0' + product);
			else
			{
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
				else
					_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

