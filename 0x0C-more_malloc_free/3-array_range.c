#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of ints containing all values in a range
 * @min: smallest number in the array
 * @max: largest number in the array
 *
 * Return: pointer to the start of the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i - min] = i;
	return (arr);
}
