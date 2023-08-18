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

	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 14; ++b)
		{
			if (b < 9)
			_putchar((b / 10) + '0');
			else
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}		
}
