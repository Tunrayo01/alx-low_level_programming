#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer pointing to a string
 * Return: the converted number, or 0 if more chars in the string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bin = (bin * 2) + (*b - '0');
		b++;
	}
	return (bin);
}
