#include "main.h"

/**
 * clear_bit -function that sets the value of a bit to 0
 * @n: number pointer
 * @index: index of bit
 * Return: 1 if success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	*n &= ~(1UL << index);
	return (1);
}
