#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: no return value
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
