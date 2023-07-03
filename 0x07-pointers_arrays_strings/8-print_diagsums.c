#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of diagonals of given 2d integer array
 * @a: given 2d array
 * @size: size of the array
 *
 * Return: no return value
 */

void print_diagsums(int *a, int size)
{
	int i;
	int leftdiag;
	int rightdiag;

	leftdiag = 0;
	rightdiag = 0;
	for (i = 0; i < size; i++)
	{
		leftdiag += a[i + (size * i)];
		rightdiag += a[size - 1 - i + (size * i)];
	}
	printf("%d, %d\n", leftdiag, rightdiag);
}
