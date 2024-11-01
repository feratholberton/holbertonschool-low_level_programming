#include "main.h"

/**
 * print_rev - Print a text in reverse
 *
 * @string: Text to reverse
 *
 * Return: void
 */

void print_rev(char *string)
{
	int length = 0;
	int iterator = 0;

	while (string[length] != '\0')
	{
		length++;
	}

	for (iterator = length - 1; iterator >= 0; iterator--)
	{
		_putchar(string[iterator]);
	}

	_putchar('\n');
}
