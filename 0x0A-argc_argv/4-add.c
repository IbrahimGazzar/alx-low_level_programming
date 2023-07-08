#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that adds positive numbers
 * @argc: number of arguements
 * @argv: sent arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
