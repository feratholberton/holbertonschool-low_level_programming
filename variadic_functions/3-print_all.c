#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print any arguments
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int printed = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (printed)
		{
			printf(", ");
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				printed = 1;
				break;
			default:
				printed = 0;
				break;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
