#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: A NULL terminated string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		size_t len = 0;
		while (text_content[len] != '\0')
			len++;

		ssize_t bytes_written = write(fd, text_content, len);
		if (bytes_written != (ssize_t)len)
			return (close(fd), -1);
	}

	close(fd);
	return (1);
}

