#include "main.h"

int sqrt_helper(int n, int guess);
/**
* _sqrt_recursion - natural square root of a number
* @n: number to find its square root
* Return: natural square root, or -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}

/**
* sqrt_helper - Recursive helper function to find square root
* @n: number for which to find square root
* @guess: current guess for the square root
* Return: natural square root, or -1
*/

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}
