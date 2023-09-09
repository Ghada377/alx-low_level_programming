#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet (except q and e)
 * followed by a new line using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q') /* Exclude 'e' and 'q' */
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
