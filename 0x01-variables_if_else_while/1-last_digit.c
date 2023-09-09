#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number, assigns it to the
 * variable 'n', and then prints the last digit of 'n'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit; /* Declare the variable here */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10; /* Calculate the last digit */

	printf("Last digit of %d is %d", n, lastDigit);

	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

