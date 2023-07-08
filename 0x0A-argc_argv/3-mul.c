#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers
 * @argc: number of arguements
 * @argv: sent arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error");
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
