#include "main.h"

/**
 * _strncat - concatenates until a given number
 * @dest: destination string
 * @src: string to get added
 * @maxItems: limmit of chars to concatenate
 * Return: string
 */
char *_strncat(char *dest, char *src, int maxItems)
{
	char *dest_start = dest;
	int item = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	for (item = 0; item < maxItems && *src != '\0'; item++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
