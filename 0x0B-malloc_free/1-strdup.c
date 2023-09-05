#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated space
* @str: input string to be duplicated
* Return: pointer to the duplicated string, 0 otherwise
*/

char *_strdup(char *str)
{
	char *dup;
	int lenght = 0, x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	dup = malloc((lenght + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= lenght ; x++)
	{
		dup[x] = str[x];
	}
	return (dup);
}
