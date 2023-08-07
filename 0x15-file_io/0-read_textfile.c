#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - prints the contents of a given file
 * @filename: name of the file to be printed
 * @letters: number of letters that should be printed
 *
 * Return: number of actual letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t count;
	ssize_t read_bytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = malloc(letters * sizeof(char));
	if (c == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, c, letters);
	if (read_bytes == -1)
	{
		free(c);
		close(fd);
		return (0);
	}
	count = write(STDOUT_FILENO, c, read_bytes);
	free(c);
	close(fd);
	if (count != read_bytes)
		return (0);
	return (count);
}
