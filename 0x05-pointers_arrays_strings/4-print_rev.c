#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be used
 * Return: void
 */

void print_rev(char *s)
{
	int j;
	int counter = 0;

	for (j = 0; s[j] != '\0'; j++)
		counter++;
		for (j = counter - 1; j >= 0; j++)
			_putchar(s[j]);
	_putchar('\n');
}
