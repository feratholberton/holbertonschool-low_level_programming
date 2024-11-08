#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @string: to measure
 * Return: int
 */

int _strlen_recursion(char *string)
{
	if (*string == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(string + 1));
}
