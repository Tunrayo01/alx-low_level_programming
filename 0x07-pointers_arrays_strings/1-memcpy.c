#include "main.h"
#include <string.h>

/**
* _memcpy - function that copies memory area
* @dest: destination pointer
* @src: pointer to be copied
* @n: copied time
* Return: destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
