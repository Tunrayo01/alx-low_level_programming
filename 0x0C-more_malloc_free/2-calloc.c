#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: number of elements
* @size: size of elements
* Return: pointer to the memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int size_sum, x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	size_sum = nmemb * size;

	ptr = malloc(size_sum);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size_sum; x++)
	{
		*((char *)ptr + x) = 0;
	}
	return (ptr);
}
