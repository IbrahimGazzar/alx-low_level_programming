#include <stdio.h>
#include <stdlib.h>

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
 * main - a function that multiplies two numbers
 * @argc: number of arguements
 * @argv: sent arguments
 */

int main (int argc, char *argv[])
{
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	foo(argc);
	return (0);
}
