#include "main.h"

/**
 * times_table - Write times tables
 * Return: times tables
 */

void times_table(void)
{
	int i, result;

	for (i = 0; i <= 9; i++)
	{
		result = 9 * i;
		if (result >= 10)
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		else
		{
			_putchar(result + '0');
		}

		if (i != 9)
		{
			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
