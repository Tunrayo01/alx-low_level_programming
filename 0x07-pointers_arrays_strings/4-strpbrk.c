#include "main.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s: string
* @accept: the string containing bytes to search for.
* Return: a pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}

	return (0);
}
