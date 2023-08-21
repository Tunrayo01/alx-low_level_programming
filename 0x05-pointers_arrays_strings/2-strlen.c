#include "main.h"

/**
 * _strlen - function that return lenght of string
 * @s: string to be used
 * Return: string lenght
 */

int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0; i++)
		counter++;
	return (counter);
}
