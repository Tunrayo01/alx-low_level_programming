#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @n: input parameter
 * Return: always 0 (success)
 */

char *string_toupper(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] = n[x] - 32;
		}
		x++;
	}
	return (0);
}
