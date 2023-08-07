#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include "main.h"
void error_98(char *s);
void error_99(int fd, char *s);
void error_100(int fd);
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
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		error_98(argv[1]);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_98(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error_99(fd1, argv[2]);
	text = malloc(sizeof(char) * 1024);
	do
	{
		read_bytes = read(fd1, text, 1024);
		if (read_bytes == -1)
		{
			if (close(fd2) == -1)
				error_100(fd2);
			if (close(fd1) == -1)
				error_100(fd1);
			error_98(argv[1]);
		}
		if(write(fd2, text, read_bytes) != read_bytes)
		{
			if (close(fd2) == -1)
				error_100(fd2);
			error_99(fd1, argv[2]);
		}
	} while (read_bytes > 0);
	return (0);
}
/**
 * error_98 - deal with error in the first file
 * @s: file name of the file
 *
 * Return: no return value
 */

void error_98(char *s)
{
	printf("Error: Can't read from file %s\n", s);
	exit(98);
}
/**
 * error_99 - deal with errors in the second file
 * @fd: the first file
 * @s: name of the second file
 *
 * Return: no return value
 */
void error_99(int fd, char *s)
{
	printf("Error: Can't write to %s\n", s);
	if (close(fd) == -1)
		error_100(fd);
	exit(99);
}
/**
 * error_100 - deals with error in closing files
 * @fd: file failed to close
 *
 * Return: no return value
 */
void error_100(int fd)
{
	printf("Error: Can't close fd %d\n", fd);
	exit(100);
}
