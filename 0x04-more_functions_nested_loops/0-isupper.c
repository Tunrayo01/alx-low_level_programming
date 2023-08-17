#include "main.h"

/**
 *_isupper - function that checks for upper case
 *
 * @c: the character to be checke
 *
 * Return: returns 1 for upper and 0 for lower
 */

int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
