#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: string
* @accept: string with characters to match
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (len);
}
