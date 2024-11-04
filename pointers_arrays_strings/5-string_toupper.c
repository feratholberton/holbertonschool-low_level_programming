#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @string: guess
 * Return: string
 */

char *string_toupper(char *string)
{
	char *pointer = string;

	while (*pointer != '\0')
	{
		if (*pointer >= 'a' && *pointer <= 'z')
		{
			*pointer = *pointer - 32;
		}

		pointer++;

	}

	return (string);
}
