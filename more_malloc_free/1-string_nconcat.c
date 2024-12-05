#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 */

char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *result;
	unsigned int i, j, len1 = 0, len2 = 0, total_len;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	while (str1[len1] != '\0')
		len1++;

	while (str2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	total_len = len1 + n + 1;

	result = malloc(total_len);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = str1[i];

	for (j = 0; j < n; j++)
		result[i + j] = str2[j];

	result[i + j] =  '\0';

	return (result);
}
