#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function for the calc program
 * @argc: number of passed arguements
 * @argv: the passed arguements
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int (*got_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	got_op = get_op_func(argv[2]);
	if (got_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", got_op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
