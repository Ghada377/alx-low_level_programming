#include "main.h"

/**
 * numLength - return the Length of string
 * @num: operation number
 *
 * Return: Length of the number
 */
int numLength(int num)
{
	int Length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		Length += 1;
	}
	return (Length);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, sumo = 0;

	printf("%lu, %lu", f1, f2); /* Print the first two numbers */

	for (count = 2; count <= 98; count++)
	{
		if (f1o > 0)
			printf(", %lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf(", %lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f2 = sum;
		f1o = f2o;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

