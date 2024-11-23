#include <unistd.h>

/**
 * main - write quote
 * Return: int
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, q, sizeof(q) - 1);
	return (1);
}
