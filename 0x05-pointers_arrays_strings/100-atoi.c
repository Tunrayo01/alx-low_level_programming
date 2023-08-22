#include "main.h"
#include <limits.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be used
 * Return: integer
 */

int _atoi(char *s)
{
	int sign, t, i;

	sign = 1;
	t = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
		if (t > INT_MAX / 10 || (t == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			if  (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		t = t * 10 + (s[i] - '0');
		}
		else if (t != 10)
		{
		break;
		}
		i++;
	}
	return (t * sign);
}
