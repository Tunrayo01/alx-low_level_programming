#include "main.h"

/**
 * print_number - function that prints an integer
 *@n: input parameter
 * Return: always 0(success);
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -x;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
