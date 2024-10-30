#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: a sequense of numbers
 */

int main(void)
{
	int iterator;
	int countUntil = 100;

	for (iterator = 1; iterator <= countUntil; iterator++)
	{
		if (iterator % 3 == 0 && iterator % 5 == 0)
			printf("FizzBuzz");
		else if (iterator % 3 == 0)
			printf("Fizz");
		else if (iterator % 5 == 0)
			printf("Buzz");
		else
			printf("%d", iterator);

		if (iterator < countUntil)
			printf(" ");
	}
	printf("\n");
	return (0);
}
