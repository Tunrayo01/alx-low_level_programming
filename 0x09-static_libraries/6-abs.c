#include "main.h"

/**
 * _abs - calculates absolute value for integer
 *
 * @c: the number to be tested
 *
 * Return: absolute value of integer or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	return (c);
}
