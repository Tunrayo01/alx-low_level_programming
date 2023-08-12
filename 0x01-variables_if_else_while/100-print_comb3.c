#include <stdio.h>

/**
 * main - combination of numbers
 *
 * Return: always 0(success)
 */

int main(void)
{
	int x = 0;
	int y = 1;

	while (x <= 8)
	{
	while (y <= 9)
	{
		if (!(x > y) &&  x != y)
		{
		putchar(x + '0');
		putchar(y + '0');
			if (x == 8 && y == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	y++;
	}
	y = 0;
	x++;
	}
	return (0);
}
