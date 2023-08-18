#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	char c;

	for (c >= 0; c <= 9; c++)
		_putchar(c);
	_putchar('\n');
}
