#include "main.h"

/**
 * get_endianness - function that checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int check = 1;
	char *byte_check = (char *)&check;

	return ((*byte_check == 1) ? 1 : 0);
}
