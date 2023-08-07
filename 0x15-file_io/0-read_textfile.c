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
	FILE *fp;
	char c;
	ssize_t count;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	count = 0;
	while ((c = fgetc(fp)) != EOF && letters)
	{
		_putchar(c);
		letters--;
		count++;
	}
	return (count);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
