#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int mul = 1;
	int x;

	if (!(argc > 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			mul *= atoi(argv[x]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
