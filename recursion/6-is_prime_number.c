#include "main.h"

/**
 * helper - prime number helper
 * @number: guess
 * @divisor: guess
 * Return: a function
 */

int helper(int number, int divisor)
{
	if (number <= 1)
	{
		return (0);
	}

	if (divisor * divisor > number)
	{
		return (1);
	}

	if (number % divisor == 0)
	{
		return (0);
	}

	return (helper(number, divisor + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @number: to be checked
 * Return: 1 if number is prime
 */

int is_prime_number(int number)
{
	return (helper(number, 2));
}
