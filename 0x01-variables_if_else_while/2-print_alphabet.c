#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: always 0(success)
 */

int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
