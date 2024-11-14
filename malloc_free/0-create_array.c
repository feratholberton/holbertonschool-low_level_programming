#include <stdlib.h>

/**
 * *create_array - guess
 * @size: characters to allocate
 * @character: char to start with
 * Return: pointer
 */

char *create_array(unsigned int size, char character)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = character;
	}

	return (array);
}
