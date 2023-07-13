#include <stdlib.h>
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
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
