#include "main.h"

/**
 * _puts - Print a string of characters
 *
 * @string: The string to print
 *
 * Return: void
 */

void _puts(char *string)
{
	int character = 0;

	while (string[character] != '\0')
	{
		_putchar(string[character]);
		character++;
	}

	_putchar('\n');
}
