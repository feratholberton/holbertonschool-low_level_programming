#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - guess
 * @separator: string to put between each number
 * @numbers: quantity of items -a.k.a. parameters- to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int numbers, ...)
{
	unsigned int i;
	int value;

	va_list integs;

	va_start(integs, numbers);

	for (i = 0; i < numbers; i++)
	{
		value = va_arg(integs, int);
		if (i == numbers - 1)
		{
			printf("%d", value);
		}
		else
		{
			printf("%d%c", value, separator[0]);
		}
	}

	printf("\n");
	va_end(integs);
}
