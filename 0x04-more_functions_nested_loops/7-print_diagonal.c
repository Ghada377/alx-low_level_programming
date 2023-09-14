#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n'); /* If n is 0 or less, print just a newline */
	}
	else
	{
		int i, spaces;

		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' '); /* Print leading spaces before \ */
			}
			_putchar('\\'); /* Print the \ */
			_putchar('\n'); /* Print a newline after \ */
		}
	}
}

