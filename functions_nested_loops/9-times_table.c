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
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			_putchar(result + '0');

			if(col == 0) {
				_putchar('+');
			}
		}
		_putchar('\n');
	}
}
