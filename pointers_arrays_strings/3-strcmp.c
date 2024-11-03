#include "main.h"

/**
 * _strcmp - compares two strings
 * @strOne: string one
 * @strTwo: string two
 * Return: number
 */

int _strcmp(char *strOne, char *strTwo)
{
	while (*strOne != '\0' && *strTwo != '\0' && *strOne == *strTwo)
	{
		strOne++;
		strTwo++;
	}

	return (*strOne - *strTwo);
}
