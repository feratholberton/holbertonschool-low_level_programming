#include "main.h"

/**
 * print_most_numbers - prints 01356789
 *
 * Return: numbers
 */

void print_most_numbers(void)
{
	int iterator;

	for (iterator = 48; iterator <= 57; iterator++)
	{
		if (iterator != 50 && iterator != 52)
		{
			_putchar(iterator);
		}
	}
	_putchar('\n');
}
