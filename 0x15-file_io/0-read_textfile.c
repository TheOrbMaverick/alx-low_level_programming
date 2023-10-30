#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[1024];
	ssize_t read_result;
	ssize_t write_result;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = 0;

	while (letters > 0)
	{
		ssize_t read_size = letters < sizeof(buffer) ? letters : sizeof(buffer);
		read_result = read(fd, buffer, read_size);

		if (read_result == -1)
		{
			close(fd);
			return (0);
		}

		if (read_result == 0)
			break;

		write_result = write(STDOUT_FILENO, buffer, read_result);
		if (write_result == -1)
		{
			close(fd);
			return (0);
		}

		bytes += write_result;
		letters -= read_result;
	}

	close(fd);
	return (bytes);
}
