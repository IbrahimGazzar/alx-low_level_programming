#include <stdio.h>
0;276;0c#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: contents to be put in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		bytes_write = write(fd, text_content, strlen(text_content));
	close(fd);
	if (bytes_write == -1)
		return (-1);
	return (1);
}
