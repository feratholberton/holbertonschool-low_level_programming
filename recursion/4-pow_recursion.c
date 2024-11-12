#include "main.h"

/**
 * _pow_recursion - raise a number base to the power of exponent
 * @base: guess
 * @exponent: guess
 * Return: a number raised to another
 */

int _pow_recursion(int base, int exponent)
{
	if (exponent < 0)
	{
		return (-1);
	}

	if (exponent == 0)
	{
		return (1);
	}

	return (base * _pow_recursion(base, exponent - 1));
}
