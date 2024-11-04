#include "main.h"

/**
 * reverse_array - guess
 * @intsArr: array of integers
 * @arrayItems: number of items in the array
 * Return: void
 */

void reverse_array(int *intsArr, int arrayItems)
{
	int temp;
	int i;

	for (i = 0; i< arrayItems / 2; i++)
	{
		temp = intsArr[i];
		intsArr[i] = intsArr[arrayItems - 1 - i];
		intsArr[arrayItems - 1 - i] = temp;
	}
}
