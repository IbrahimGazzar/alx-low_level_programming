#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched in
 * @size: number of elements in array
 * @cmp: pointer to comparing function
 *
 * Return: index of the found integer, -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
