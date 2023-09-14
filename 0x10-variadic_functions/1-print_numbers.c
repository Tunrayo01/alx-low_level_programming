#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: string
* @n: number of integers
* @...: integers to print
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int number;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
