#include "main.h"
#include <stdlib.h>

/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer to the memory
* @old_size: current size pointer
* @new_size: new size
* Return: pointer to new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_size = old_size;
	}

	for (x = 0; x < new_size; x++)
	{
		*((char *)new_ptr + x) = *((char *)ptr + x);
	}
	free(ptr);
	return (new_ptr);
}
