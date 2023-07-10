#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of char and intializes it
 * @size: size of the array to be created
 * @c: character to intialize the array with
 *
 * Return: the array created
 */


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size < 1)
		return (NULL);
	if (size > 4168)
		size = 4168;
	arr = malloc(sizeof(unsigned int) * size);
	i = 0;
	while (1)
	{
		if (arr == NULL)
			return (NULL);
		if (i >= size)
			return (arr);
		arr[i] = c;
		i++;
	}
	return (arr);
}
