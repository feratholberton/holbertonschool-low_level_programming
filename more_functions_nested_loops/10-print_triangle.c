#include "main.h"

/**
 * print_triangle - guess what
 * @size: of the triangle
 *
 * Return: Something
 */

void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row < size; row++)
		{
			for (col = row; col < size; col++)
			{
				_putchar(' ');
			}

			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
