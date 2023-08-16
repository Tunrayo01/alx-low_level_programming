#include <stdio.h>

/**
 * main - calculates the sum of eleven even values
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int b, c, next, sum;
	int a;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 333; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = b + c;
		b = c;
		c = next;
	}
	printf("%lu\n", sum);
	return (0);
}
