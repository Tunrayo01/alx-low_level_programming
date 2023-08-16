#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers x to 98
 *
 * @x: entry point
 *
 * Return: empty
 */

void print_to_98(int x)
{
	if (x <= 98)
	{
		for (x = x; x <= 97; x++)
			printf("%d,  ", x);
	}
	else
		for (x = x; x > 98; x--)
			printf("%d, ", x);
printf("98\n");
}
