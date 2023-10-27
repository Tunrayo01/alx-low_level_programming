#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: number
 * @index: index of bit
 * Return: value of bit, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
