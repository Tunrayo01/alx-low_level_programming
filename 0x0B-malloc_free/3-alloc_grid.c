#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array
* @width: width of grid
* @height: height of grid
* Return: grid pointer, 0 otherwise
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
