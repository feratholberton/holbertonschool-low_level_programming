#include "main.h"

/**
 * print_numbers - Print numbers
 *
 * Return: number 0 to 9
 */

void print_numbers(void)
{
	int iterator = 0;

	for (iterator = 48; iterator <= 57; iterator++)
	{
		_putchar(iterator);
	}
	_putchar('\n');
}
