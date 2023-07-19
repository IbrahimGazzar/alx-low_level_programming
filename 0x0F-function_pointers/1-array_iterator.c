#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a given function on every element of array
 * @array: array to be iterated on
 * @size: size of the array
 * @action: pointer at the function to be used
 *
 * Return: no return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || size < 1 || action == NULL)
		return;
	for (i = 0; i < (size / sizeof(int)); i++)
		action(array[i]);
}
