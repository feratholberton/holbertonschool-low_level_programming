#include "main.h"

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
