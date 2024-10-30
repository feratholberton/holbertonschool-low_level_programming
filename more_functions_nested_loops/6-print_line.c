#include "main.h"

/**
 * print_line - draw a line
 * @underscoreQty: number of underscores
 *
 * Return: a line
 */

void print_line(int underscoreQty)
{
	int counter;

	if (underscoreQty > 0)
	{
		for (counter = 0; counter < underscoreQty; counter++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
