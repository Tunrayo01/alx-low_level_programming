#include "main.h"
#include <string.h>

int palindrome_helper(char *s, int start, int end);

/**
* is_palindrome - checks for a string that is palindrome
* @s: string to be checked
* Return: if palindrome 1, otherwise 0
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}

/**
* palindrome_helper - Recursive function
* @s: string to be checked
* @start: starting index
* @end: ending index
* Return: if palindrome 1, otherwise 0
*/

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}
