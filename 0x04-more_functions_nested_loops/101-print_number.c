#include "main.h"

/**
 * print_number - function that prints an integer
 *@n: input parameter
 * Return: always 0(success);
 */

void print_number(int n)
{
	 int x;
	 int y = 0;
	 int d = 1;
	 unsigned int i = n;
	 unsigned int j = n;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1;
		n = -n;
		j = n;
		i = n;
		i += 1;
		j += 1;
	}
	while (i != 0)
	{
		i = i / 10;
		y++;
	}
	for (x = 1; x < y; x++)
	{
		d *= 10;
	}
	for (x = 0; x < y; x++)
	{
		_putchar(j / d + '0');
		j = j % d;
		d = d / 10;
	}
}
