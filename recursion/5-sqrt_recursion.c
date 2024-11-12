#include "main.h"

/**
 * helper - test for natural number
 * @number: guess
 * @test: try for square root
 *
 * Return: the function
 */

int helper(int number, int test)
{
	if (test * test == number)
	{
		return (test);
	}

	if (test * test > number)
	{
		return (-1);
	}

	return (helper(number, test + 1));
}

/**
 * _sqrt_recursion - the square root
 * @number: to find a square root
 *
 * Return: the square root
 */

int _sqrt_recursion(int number)
{
	if (number < 0)
	{
		return (-1);
	}

	return (helper(number, 0));
}
