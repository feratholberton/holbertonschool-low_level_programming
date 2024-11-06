#include "main.h"
#include <stdio.h>

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
