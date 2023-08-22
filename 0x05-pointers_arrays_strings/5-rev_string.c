#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be used
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int b;
	int counter = 0;

	for (a = 0; s[a] != '\0'; a++)
		counter++;
	for (a = 0; a < counter / 2; a++)
	{
		b = s[a];
		s[a] = s[counter - 1 - a];
		s[counter - 1 - a] = b;
	}
}
