#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase 10 times followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++) /* Loop 10 times */
	{
		letter = 'a';

		while (letter <= 'z') /* Loop through the alphabet */
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n'); /* Print a new line after each set of alphabets */
	}
}

