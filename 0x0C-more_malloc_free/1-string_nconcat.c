#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: parameter string1
* @s2: parameter string2
* @n: number of bytes
* Return: pointer if fail, and NULL if passed
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lenght1 = 0, lenght2 = 0, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[lenght1])
		lenght1++;
	while (s2[lenght2])
		lenght2++;

	if (n >= lenght2)
	{
		n = lenght2;
	}

	concat = malloc(sizeof(char) * (lenght1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (x = 0; x < lenght1; x++)
	{
		concat[x] = s1[x];
	}
	for (y = 0; y < n; y++, x++)
	{
		concat[x] = s2[y];
	}

	concat[x] = '\0';
	return (concat);
}
