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

		/* Convert the current Fibonacci number to a string and print it */
		print_number(b);

		temp = b;
		b += a;
		a = temp;
	}

	_putchar('\n'); /* Print a new line */
	return (0);
}

/**
 * print_number - Prints a number as a string
 * @n: The number to print
 */
void print_number(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

