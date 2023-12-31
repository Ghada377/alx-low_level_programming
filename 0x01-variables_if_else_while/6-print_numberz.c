#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0'); /* Convert the digit to character and print */
		digit++;
	}

	putchar('\n'); /* Print a new line character */

	return (0);
}
