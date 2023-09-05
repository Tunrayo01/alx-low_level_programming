#include "main.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars
* @size: array size
* @c: character to initialize array
* Return: pointer to the created array, otherwise 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
