#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - guess
 * @str: string
 * Return: 1
 */

int is_positive_number(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	while (*str)
	{
		if (!isdigit((unsigned char)*str))
		{
			return (0);
		}

		str++;
	}

	return (1);
}

/**
 * main - sum
 * @argc: arguments
 * @argv: args tu sum
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
