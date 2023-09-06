#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to be used
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, j, k;

	flag = 0;
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - function to split string into words
 * @str: string to split
 *
 * Return: pointer to strings array (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **dptr, *ptr;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	dptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (dptr == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				ptr = (char *) malloc(sizeof(char) * (c + 1));
				if (ptr == NULL)
					return (NULL);
				while (start < end)
					*ptr++ = str[start++];
				*ptr = '\0';
				dptr[b] = ptr - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	dptr[b] = NULL;

	return (dptr);
}
