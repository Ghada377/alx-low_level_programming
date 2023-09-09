#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints alphabet followed by a new line
 * using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a'; /* Initialize c with the first lowercase letter 'a' */

	while (c <= 'z') /* Loop from 'a' to 'z' */
	{
		putchar(c); /* Print character */
		c++; /* Move to the next character */
	}

	putchar('\n'); /* Print a new line character */

	return (0);
}
