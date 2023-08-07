#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of the file to appended
 * @text_content: text to be appended
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	bytes_write = write(fd, text_content, strlen(text_content));
	close(fd);
	if (bytes_write == -1)
		return (-1);
	return (1);
}
