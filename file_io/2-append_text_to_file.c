#include "main.h"

/**
 * append_text_to_file - attaches text to a file
 * @filename: the name of the file
 * @text_content: content of the text
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = 0;

		while (text_content[len] != '\0')
		{
			len++;
		}
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
