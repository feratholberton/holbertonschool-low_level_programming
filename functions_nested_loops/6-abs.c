#include "main.h"

/**
 * _abs - Return the absolute value of a number
 * @num: Value to check
 * Return: the absolute value
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
