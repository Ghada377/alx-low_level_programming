#include "main.h"
/**
 * print_times_table - Prints the times table for a given integer n.
 * @n: The integer to generate the times table for.
 *
 * Description: This function prints the times table for the integer 'n'.
 * It prints values from 0 to 'n' multiplied by numbers from 0 to 'n'.
 * Each value is separated by a comma and space, and the result is formatted
 * to align properly in columns.
 */
void print_times_table(int n)
{
	int prod, mult, num;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar('0');

			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod <= 99)
				{
					_putchar(' ');
				}

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

