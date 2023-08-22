#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	j = (counter - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
