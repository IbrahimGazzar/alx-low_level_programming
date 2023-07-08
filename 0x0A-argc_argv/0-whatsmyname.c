#include <stdlib.h>
#include <stdio.h>

/**
 * foo - dummy function for unused variables
 * @bar: the unused variable
 *
 * Return: no return value
 */

void foo(int bar)
{
	(void)bar;
}

/**
 * main - a function that prints the name of the file
 * @argc: number of arguments for main
 * @argv: an array of strings of the given arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	foo(argc);
	printf("%s\n", argv[0]);
	return (0);
}
