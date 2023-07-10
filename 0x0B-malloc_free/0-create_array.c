#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of character and intializes it with a char
 * @size: size of the array to be created
 * @c: character to intialize the array with
 *
 * Return: the array created
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		arr[i] = c;
	free(arr);
	return (arr);
}
