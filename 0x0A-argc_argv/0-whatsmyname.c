#include <stdlib.h>
#include <stdio.h>

void foo(int bar);

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
/**
 * foo - dummy function to use unused variables
 * @bar: variable to be dummied
 *
 * Return: no return value
 */
void foo(int bar) {
    (void)bar;
}
