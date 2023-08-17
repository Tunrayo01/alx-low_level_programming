#include <stdio.h>


/**
 *numLength - returns lenght of string
 *
 *@num: operand number
 *
 *Return: lengt of digits
 */

int numLength(int num)
{
	int lenght = 0;

	if (!num)
	{
	return (1);
	}
	while (num)
	{
		num = num / 10;
		lenght = lenght + 1;
	}
	return (lenght);
}

/**
 * main - calculate the firste 98 fibonnaci numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int x = 1, initial0s;

	while (x <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);
		tmp = (f1 + f2) % mx;
		tmp = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (x != 98)
			printf(",");
		else
			printf("\n");
		x++;
	}
	return (0);
}
