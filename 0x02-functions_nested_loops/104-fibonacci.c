#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the firste 98 fibonnaci numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fb1o, fb1i, fb2o, fb2i;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);
		fb1 = fb2;
		fb2 = sum;
	}
	fb1o = fb1 / 10000000000;
	fb1i = fb2 / 10000000000;
	fb2o = fb1 % 10000000000;
	fb2i = fb2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = fb1o + fb2o;
		h2 = fb1i + fb2i;
		if (fb1i + fb2i > 9999999999)
		{
		h1 += 1;
		h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		fb1o = fb2o;
		fb1i = fb2i;
		fb2o = h1;
		fb2i = h2;
	}
	printf("\n");
	return (0);
}
