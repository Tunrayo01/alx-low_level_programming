#include "main.h"

/**
* factorial - function that returns the factorial of a given number.
* @n: number to be used
* Return: factorial of number or -1 for error
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
