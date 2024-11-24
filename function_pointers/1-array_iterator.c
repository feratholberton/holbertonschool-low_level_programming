#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over an array
 * @array: to be iterated
 * @size: of the array
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
