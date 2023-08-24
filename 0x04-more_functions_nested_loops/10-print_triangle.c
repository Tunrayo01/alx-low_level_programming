#include "main.h"

/**
 * print_triangle - function that prints triangle
 *@size: triangle size
 * Return: always 0 (success)
 */

void print_triangle(int size)
{
	int r, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= size; s++)
		{
			for (r = 0; r < size - s; r++)
			{
			_putchar(' ');
			}
			for (r = 0; r < s; r++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
