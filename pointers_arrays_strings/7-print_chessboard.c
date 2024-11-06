#include "main.h"

/**
 * print_chessboard - guess
 * @board: chessboard array
 * Return: void
 */

void print_chessboard(char (*board)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(board[row][col]);
		}

		_putchar('\n');
	}
}
