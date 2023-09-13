#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @size: array size
 * @array: array pointer
 * @action: function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t x;

		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
