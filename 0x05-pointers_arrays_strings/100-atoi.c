#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be used
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + counter) != 0)
	{
		if (size > 0 && (*(s + counter) < '0') || *(s + counter) > '9')
		{
			break;
		}
		if (*(s + counter) == '-')
		{
		pn *= -1;
		}
		else if (((*(s + counter) >= '0') && (*(s + counter) <= '9')))
		{
			if (size > 0)
			{
				m *= 10;
			}
			size++;
		oi = oi +  (*(s + counter) - 48) * m;
		m /= 10;
		}
		counter++;
	}
	for (i = counter - size; i < counter; i++)
	{
	oi = oi + ((*(s + i) - 48) * m);
	m /= 10;
	}
	return (oi * pn);
}
