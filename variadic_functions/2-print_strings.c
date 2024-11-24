#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by another string
 * @separator: string to put between each string
 * @n: count for parameters to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(strings, char *);

		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(strings);

	printf("\n");
}
