#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of array elements
 * @size: memory size of each element
 *
 * Return: a pointer to the beginning of the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arrptr = malloc(size * nmemb);
	if (arrptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arrptr[nmemb] = 0;
	return (arrptr);
}
