#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name provided by the function pointer
 * @name: to be printed
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
