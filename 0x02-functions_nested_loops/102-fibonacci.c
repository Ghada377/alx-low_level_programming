#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1, b = 2, temp;
	int i;

	_putchar('1'); /* Print the first Fibonacci number */
	for (i = 2; i <= 50; ++i)
	{
		_putchar(','); /* Print comma and space separator */
		_putchar(' ');

		_putchar(b + '0'); /* Print the current Fibonacci number */

		temp = b;
		b += a;
		a = temp;
	}

	_putchar('\n'); /* Print a new line */
	return (0);
}

