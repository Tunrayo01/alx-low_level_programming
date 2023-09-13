#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @size: element number
 * @array: array pointer
 * @cmp: comparison pointer
 * Return: 0 if false, something else otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1);
}
