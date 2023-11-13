#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: the name of the file created
 * @letters: letter in the text
 * Return: Bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read = 0, bytes_written;
	char *buffer;

	buffer = malloc(letters);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		return (0);
	}
	bytes_written = read(fd, buffer, letters);
	if (bytes_read <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_written);
}
