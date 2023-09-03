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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
