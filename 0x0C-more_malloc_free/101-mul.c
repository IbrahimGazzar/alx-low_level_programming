#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that multiplies two input numbers
 * @argc: number of arguements to be entered
 * @argv: the arguments to the program
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error");
				exit(98);
			}
		}
	}
	printf("%ld\n", (atol(argv[1]) * atol(argv[2])));
	return (0);
}
