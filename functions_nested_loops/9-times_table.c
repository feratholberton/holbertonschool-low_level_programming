#include "main.h"

/**
 * times_table - Write times tables
 * Return: times tables
 */

void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		result = row * col;
		_putchar(result + '0');
		_putchar(',');
	}
	_putchar('\n');
}
