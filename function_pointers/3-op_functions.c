#include "3-calc.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * op_add - Sum 2 integers
 * @a: int
 * @b: int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diff between 2 integers
 * @a: int
 * @b: int
 * Return: sum
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 integers
 * @a: int
 * @b: int
 * Return: sum
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div between 2 integers
 * @a: int
 * @b: int
 * Return: sum
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		write(2, "Error\n", 6);
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of a integer over another
 * @a: int
 * @b: int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		write(2, "Error\n", 6);
		exit(100);
	}
	return (a % b);
}
