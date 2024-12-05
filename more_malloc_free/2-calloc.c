#include "main.h"
#include <stdlib.h>

/**
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;
	unsigned int i;
	char *zero_fill;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	zero_fill = (char *)ptr;
	for (i = 0; i < total_size; i++)
		zero_fill[i] = 0;

	return (ptr);
}
