#include "main.h"

/**
 * _puts_recursion - print method
 * @string: to print
 * Return: void
 */

void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*string);
	_puts_recursion(string + 1);
}
