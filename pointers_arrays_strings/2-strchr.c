#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @string: in which we look for
 * @character: the character we look for
 * Return: the string or NULL
 */

char *_strchr(char *string, char character)
{
	while (*string != '\0')
	{
		if (*string == character)
		{
			return (string);
		}
		string++;
	}

	if (character == '\0')
	{
		return (string);
	}

	return (NULL);
}
