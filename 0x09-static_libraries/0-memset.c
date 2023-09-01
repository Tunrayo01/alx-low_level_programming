#include "main.h"
#include <string.h>

/**
**_memset - function that fills memory with a constant byte
* @s: pointer
* @b: character to be used
* @n: number of character
* Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
