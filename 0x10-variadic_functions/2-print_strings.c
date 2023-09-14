#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints strings, followed by a new line
* @separator: string
* @n: number of strings
* @...: strings to print
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		printf("(nil)");

		else
			printf("%s", str);

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
