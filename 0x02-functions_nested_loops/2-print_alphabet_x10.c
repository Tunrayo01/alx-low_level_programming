#include "main.h"

/**
 *print_alphabet_x10 - print alphabets in lowercase
 *
 *description: printing alphabets
 *
 *Return: always 0(success)
 */

void print_alphabet_x10(void)
{
	char c;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
