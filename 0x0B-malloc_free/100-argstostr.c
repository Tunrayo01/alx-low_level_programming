#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of program
 * @ac: input
 * @av: double pointer
 * Return: null
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, l = 0;
	char *str;

	if (ac == 0 || av == 0)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}
