#include "main.h"

/**
 * print_line - function that draws straight line
 *@n: number of  time to print
 * Return: always 0 (success)
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
