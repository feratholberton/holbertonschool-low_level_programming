#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to find
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *h_start;
	char *n_start;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		h_start = haystack;
		n_start = needle;

		while (*h_start && *n_start && *h_start == *n_start)
		{
			h_start++;
			n_start++;
		}

		if (*n_start == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
