#include "main.h"

int is_prime_recursive(int n, int divisor);

/**
* is_prime_number - function ro check prime number
* @n: number to be checked
* Return: if prime 1, otherwise 0
*/

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

/**
* is_prime_recursive - Recursive function
* @n: number to be checked
* @divisor: divisor to check for divisibility
* Return: if prime 1, otherwise 0
*/

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor + 1));
}
