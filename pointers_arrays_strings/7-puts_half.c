#include "main.h"

/**
 * puts_half - print half of a given string
 * @string: guess
 * Return: void
 */

void puts_half(char *string)
{
	int chars = 0;
	int halfStart;
	int iterator;


	while (string[chars] != '\0')
	{
		chars++;
	}

	if (chars % 2 == 0)
	{
		halfStart = chars / 2;
	}
	else
	{
		halfStart = (chars - 1) / 2 + 1;
	}

	for (iterator = halfStart; iterator < chars; iterator++)
	{
		_putchar(string[iterator]);
	}

	_putchar('\n');
}
