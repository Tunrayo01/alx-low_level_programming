#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip
 * @n: first number parameter
 * @m: second number parameter
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
