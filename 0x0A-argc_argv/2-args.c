#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the name of the file
 * @argc: number of arguments for main
 * @argv: an array of strings of the given arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
