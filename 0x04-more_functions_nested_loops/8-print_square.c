#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: The size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n'); /* If size is 0 or less, print just a newline */
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#'); /* Print a # for each column */
			}
			_putchar('\n'); /* Print a newline after each row */
		}
	}
}

