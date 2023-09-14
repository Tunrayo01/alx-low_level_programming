#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -function that returns the sum of all its parameters
* @n: parameters numbers
* @...: sum parameters
* Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
