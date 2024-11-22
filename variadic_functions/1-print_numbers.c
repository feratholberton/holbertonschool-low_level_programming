#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a string
 * @separator: string to put between each number
 * @count: of parameters to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int count, ...)
{
	unsigned int i;
	int value;

	va_list integs;

	va_start(integs, count);

	for (i = 0; i < count; i++)
	{
		value = va_arg(integs, int);
		printf("%d", value);
		if (i != count - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(integs);
	printf("\n");
}
