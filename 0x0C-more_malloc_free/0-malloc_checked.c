#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - unction that allocates memory using malloc
* @b: parameter to be used
* Return: pointerand exits with status 98
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
