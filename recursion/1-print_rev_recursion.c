#include "main.h"

/**
 * _print_rev_recursion - print reversed strings
 * @string: to print in reverse
 * Return: void
 */

void _print_rev_recursion(char *string)
{
	if (*string == '\0')
	{
		return;
	}

	_print_rev_recursion(string + 1);
	_putchar(*string);

}
