#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search for a string
 * @string: to be scanned
 * @accept: bytes to search
 * Return: @string or NULL
 */

char *_strpbrk(char *string, char *accept)
{
	int i;

	while (*string)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*string == accept[i])
			{
				return (string);
			}
		}
		string++;
	}

	return (NULL);
}
