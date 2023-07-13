#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks if a malloc process with given size is viable or not
 * @b: size of memory to be allocated
 *
 * Return: if viable, pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
