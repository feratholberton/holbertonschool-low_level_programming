#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @stringOne: guess
 * @stringTwo: guess
 * Return: 2 strings concatenated
 */

char *str_concat(char *stringOne, char *stringTwo)
{
	unsigned int lengthOne = 0, lengthTwo = 0, i = 0, ii = 0;
	char *result;

	if (stringOne == NULL)
		stringOne = "";

	if (stringTwo == NULL)
		stringTwo = "";

	while (stringOne[lengthOne] != '\0')
		lengthOne++;

	while (stringTwo[lengthTwo] != '\0')
		lengthTwo++;

	result = malloc((lengthOne + lengthTwo + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < lengthOne; i++)
		result[i] = stringOne[i];

	for (ii = 0; ii < lengthTwo; ii++)
		result[lengthOne + ii] = stringTwo[ii];

	result[lengthOne + lengthTwo] = '\0';
	return (result);
}
