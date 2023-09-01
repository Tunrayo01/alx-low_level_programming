#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination of string
 * @src: source of string
 * Return: pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
