#include <stdio.h>

/**
 * print_array - of integers
 * @intsArray: array pointer
 * @numbers: numbers to print
 * Return: void
 */

void print_array(int *intsArray, int numbers)
{
	int iterator = 0;

	for (iterator = 0; iterator < numbers; iterator++)
	{
		printf("%d", intsArray[iterator]);

		if (iterator < numbers - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
