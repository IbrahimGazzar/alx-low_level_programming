#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	char *num;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = argv[i];
		while (*num != '\0')
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
