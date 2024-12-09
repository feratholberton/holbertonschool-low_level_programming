#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: for the new file
 * @text_content: for the new file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;

		bytes_written = write(fd, text_content, text_length);

		if (bytes_written == -1 || bytes_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}

