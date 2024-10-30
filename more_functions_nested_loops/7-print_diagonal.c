#include "main.h"

/**
 * print_diagonal - just guess
 * @slashQty: number of slashes
 *
 * Return: slashes
 */

void print_diagonal(int slashQty)
{
	int row, indentSpaces;

	if (slashQty > 0)
	{
		for (row = 0; row < slashQty; row++)
		{
			for (indentSpaces = 0; indentSpaces < row; indentSpaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
