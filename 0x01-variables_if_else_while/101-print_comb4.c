#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints combination of three digit
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
		if ((i != j) != k)
		{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (i == 7 && j == 8)
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
