#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @bytes: numbers of bytes to copy
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int bytes)
{
	unsigned int i;

	for (i = 0; i < bytes; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
