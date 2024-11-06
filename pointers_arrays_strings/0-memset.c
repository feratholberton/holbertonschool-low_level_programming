#include "main.h"

/**
 * _memset - fills memory with a constant character
 * @dest: pointer to area to fill
 * @byte: the byte to use to fill
 * @qty: bytes ti fill
 * Return: the pointer of the modified memory
 */

char *_memset(char *dest, char byte, unsigned int qty)
{
	unsigned int i;

	for (i = 0; i < qty; i++)
	{
		dest[i] = byte;
	}

	return (dest);
}
