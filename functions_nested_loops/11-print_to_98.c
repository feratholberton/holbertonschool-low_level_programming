#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Write number until it gets to 98
 * @n: number to start counting
 * Return: times tables
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
