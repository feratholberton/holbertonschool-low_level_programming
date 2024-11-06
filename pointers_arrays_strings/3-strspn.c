#include "main.h"

unsigned int _strspn (char *string, char* accept)
{
	unsigned int count = 0;
	int i, match;

	while(*string)
	{
		match = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*string == accept[i])
			{
				match = 1;
				break;
			}
		}

		if (match == 0)
		{
			break;
		}

		count++;
		string++;
	}

	return (count);
}
