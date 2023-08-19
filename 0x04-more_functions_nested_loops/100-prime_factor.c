#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 *
 * Return: always o (success)
 */

int main(void)
{
	unsigned long int j, n = 612852475143;

	for (j = 3; j < 782849; j = j + 2)
	{
		while ((n % j == 0) && (n != j))
			n = n / j;
	}
	printf("%lu\n", n);
	return (0);
}
