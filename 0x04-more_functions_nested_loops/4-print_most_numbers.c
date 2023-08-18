#include "main.h"

/**
 * print_most_numbers - fuction to print numbers from 0 to 9 without 2 and 4
 *
 * Return: always 0 (success)
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c >= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
