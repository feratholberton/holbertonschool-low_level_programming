#include "main.h"

/**
 * puts2 - print even characters
 *
 * @string: to print 
 *
 * Return: void
 */

void puts2(char *string)
{
	int character = 0;

	while (string[character] != '\0')
	{
		if (character % 2 == 0)
		{
			_putchar(string[character]);
		}

		character++;
	}
	_putchar('\n');
}
