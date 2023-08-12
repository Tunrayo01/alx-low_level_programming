#include <stdio.h>

/**
 * main - hexadecimal function
 *
 * Return: always 0(success)
 */

int main(void)
{
	char h;
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
