#include "main.h"

/**
 * rev_string - Reverse and unreverse text
 *
 * @string: string to twist
 *
 * Return: void
 */

void rev_string(char *string)
{
	char *start = string;
	char *end = string;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
