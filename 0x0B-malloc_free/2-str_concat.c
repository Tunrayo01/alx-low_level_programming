#include "main.h"
#include <stdlib.h>

/**
* str_concat - function that concatenates two string
* @s1: string1
* @s2: string2
* Return: pointer to the concatenated string, 0 otherwise
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int lenght1 = 0, lenght2 = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lenght1] != '\0')
	{
		lenght1++;
	}
	while (s2[lenght2] != '\0')
	{
		lenght2++;
	}
	concat = malloc((lenght1 + lenght2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < lenght2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
	free(concat);
}
