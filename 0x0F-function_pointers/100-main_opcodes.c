#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: command line number
 * @argv: command line array
 * Return: alwayss 0(success)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error/n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error/n");
		return (2);
	}

	char *main_ptr = (char *)main;
	int x;

	for (x = 0; x < num_bytes; x++)
	{
		printf("%02x", main_ptr[x] & 0xFF);
		if (x < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
