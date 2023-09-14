#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n'); /* If n is 0 or less, print just a newline */
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_'); /* Print an underscore character n times */
		}

		_putchar('\n'); /* Print a newline character at the end */
	}
}

