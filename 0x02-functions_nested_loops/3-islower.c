#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 *
 *@ch: character to be tested
 *
 * Return: 1 for lowercase and 0 for others
 */

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
	return (1);
	}
	return (0);
}
