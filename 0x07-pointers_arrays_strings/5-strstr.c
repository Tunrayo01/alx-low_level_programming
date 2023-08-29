#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: string
* @needle: substring to find
* Return: pointer to the beginning of the found substring, else 0
*/

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	if (!*needle)
		return (haystack);

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y]; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (0);
}
