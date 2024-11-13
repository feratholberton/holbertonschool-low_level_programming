#include <unistd.h>
#include <string.h>

/**
 * main - function
 * @argc: var
 * @argv: pointer
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		write(1, argv[0], strlen(argv[0]));
		write(1, "\n", 1);
	}

	return (0);
}
