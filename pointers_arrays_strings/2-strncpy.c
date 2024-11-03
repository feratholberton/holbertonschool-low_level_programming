#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string destination
 * @src: string given
 * @maxChars: maximun numbers of characters to copy
 * Return: string
 */

char *_strncpy(char *dest, char *src, int maxChars)
{
	/** chQ: character quantity */
	int chQ;

	for (chQ = 0; chQ < maxChars && src[chQ] != '\0'; chQ++)
	{
		dest[chQ] = src[chQ];
	}

	for ( ; chQ < maxChars; chQ++)
	{
		dest[chQ] = '\0';
	}

	return (dest);
}
