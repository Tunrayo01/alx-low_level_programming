#include "main.h"

/**
 * more_numbers - function that print 10 times the numbers
 *
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			_putchar('1');
			else
			_putchar((b % 10) + 48);
		}
	_putchar('\n');
	}
}
