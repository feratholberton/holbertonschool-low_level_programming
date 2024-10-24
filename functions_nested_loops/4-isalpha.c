#include "main.h"

/**
 * _isalpha - Checks if a value is a letter
 * @c: Value to check
 * Return: 1 if value is a letter or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
