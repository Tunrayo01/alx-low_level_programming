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
			_putchar('1');
			_putchar(b % 10 + '0');
	}
	_putchar('\n');
}
