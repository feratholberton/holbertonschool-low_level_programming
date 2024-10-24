#include "main.h"

/**
 * _islower - Entry point
 * @c: value to check
 * Return: 0 o 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
