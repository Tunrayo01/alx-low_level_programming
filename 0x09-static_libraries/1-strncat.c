#include "main.h"

/**
 * _strncat - unction that concatenates two strings which,
 * it will use at most n bytes from src
 * @dest: destination of string
 * @src: string source
 * @n: parameter to be used
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[x] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
