#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @c: character parameter
 * @i: integer parameter
 * @f: float parameter
 * Return: Always 0(success)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	int i = 0;

	while (format[i] != '\0')
	{
	switch (format[i])
	{
	case 'c':
	{
	char c = va_arg(args, int);

	printf("'%c'", c);
	break;
	}
	case 'i':
	{
	int n = va_arg(args, int);

	printf("%d", n);
	break;
	}
	case 'f':
	{
	double f = va_arg(args, double);

	printf("%.2f", f);
	break;
	}
	case 's':
	{
	char *str = va_arg(args, char *);
	if (str == NULL)
	{
	printf("(nil)");
        }
	else
	{
	printf("%s", str);
	}
        break;
	}	
}
