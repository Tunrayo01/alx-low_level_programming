#include "main.h"

/**
* rot13 - Encodes a string
* @str: input string
* Return: string
*/

char *rot13(char *str)
{
	int x, y;

	char alphabt[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alphabt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; alphabt[y] != '\0'; y++)
		{
			if (str[x] == alphabt[y])
			{
				str[x] = rot13_alphabt[y];
				break;
			}
		}
	}

	return (str);
}
