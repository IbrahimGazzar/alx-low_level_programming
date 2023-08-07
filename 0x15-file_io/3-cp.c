#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "main.h"
void error_98(void);
void error_99(int fd);
void error_100(void);
/**
 * main - main function that copies file content
 * @argc: number of given arguements
 * @argv: array of strings of given inputs
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int fd1;
	int fd2;
	ssize_t read_bytes;
	char *text;

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] == NULL)
		error_98();
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_98();
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error_99(fd1);
	text = malloc(sizeof(char) * 1024);
	do {
		read_bytes = read(fd1, text, 1024);
		if (read_bytes == -1)
		{
			if (close(fd2) == -1)
				error_100();
			if (close(fd1) == -1)
				error_100();
			error_98();
		}
		if (write(fd2, text, read_bytes) != read_bytes)
		{
			if (close(fd2) == -1)
				error_100();
			error_99(fd1);
		}
	} while (read_bytes > 0);
	return (0);
}
/**
 * error_98 - deal with error in the first file
 *
 * Return: no return value
 */

void error_98(void)
{
	perror("Error: Can't read from file");
	exit(98);
}
/**
 * error_99 - deal with errors in the second file
 * @fd: the first file
 *
 * Return: no return value
 */
void error_99(int fd)
{
	perror("Error: Can't write to");
	if (close(fd) == -1)
		error_100();
	exit(99);
}
/**
 * error_100 - deals with error in closing files
 *
 * Return: no return value
 */
void error_100(void)
{
	perror("Error: Can't close fd");
	exit(100);
}
