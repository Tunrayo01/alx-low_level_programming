#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @argc: parameter 1
* @argv: parameter 2
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
