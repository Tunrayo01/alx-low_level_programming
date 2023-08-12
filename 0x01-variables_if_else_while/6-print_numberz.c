#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar(y + '0');
	putchar('\n');
	return (0);
}
