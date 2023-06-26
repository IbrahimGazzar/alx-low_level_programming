#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints a given number of elements for a given array
 * @a: array to be printed
 * @n: number of elements
 *
 * Return: no return value
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
			printf(", %d", a[i]);
	}
	putchar('\n');
}
