#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints a given number of elements from a given array of integers
 * @a: array to be printed
 * @n: number of elements
 *
 * Return: no return value
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
		return;
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	putchar('\n');
}
