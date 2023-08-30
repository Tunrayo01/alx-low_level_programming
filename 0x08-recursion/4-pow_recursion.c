#include "main.h"

/**
 * _pow_recursion - function that returns the value of x exponential y
 * @x: number to be raised
 * @y: power to be used
 * Return: power of number , else -1 when 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
