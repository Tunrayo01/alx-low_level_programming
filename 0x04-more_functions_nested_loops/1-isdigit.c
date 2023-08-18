#include "main.h"

/**
 * _isdigit - function that checks digit
 *
 * @c: digit to be tested
 *
 * Return: return 0 for digit and 1 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
