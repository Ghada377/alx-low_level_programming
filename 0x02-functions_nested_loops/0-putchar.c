#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description:function prints the string "_putchar" followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}

	return (0);
}

