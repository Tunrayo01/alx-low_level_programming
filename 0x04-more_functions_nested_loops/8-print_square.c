#include "main.h"

/**
 * print_square - function to print square
 *@size: square size
 * Return: always 0 (success)
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < size; b++)
		{
		for (a = 0; a < size; a++)
		{
		_putchar('#');
		}
	_putchar('\n');
		}
	}
}
