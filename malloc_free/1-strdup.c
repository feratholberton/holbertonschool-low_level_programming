#include <stdlib.h>

/**
 * _strdup - duplicates a given string
 * @string: given
 * Return: pointer
 */

char *_strdup(char *string)
{
	unsigned int length;
	char *copy;
	unsigned int i;

	if (string == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (string[length] != '\0')
	{
		length++;
		copy = 0;
	}

	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		copy[i] = string[i];
	}

	return (copy);
}
