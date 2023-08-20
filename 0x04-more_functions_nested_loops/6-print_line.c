#include "main.h"

/**
 * print_line - function that draws straight line
 *@n: number of  time to print
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (m = 1; m <= n; m++)
		_putchar('_');
	_putchar('\n');
	}
}
