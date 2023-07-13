#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates the memory pointed to by a pointer
 * @ptr: pointer to be reallocated
 * @old_size: size of memory allocated to ptr
 * @new_size: size of memory to be reallocated to ptr
 *
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL && new_size > 0)
		return (newptr);
	if (old_size < new_size)
		memcpy(newptr, ptr, old_size);
	else
		memcpy(newptr, ptr, new_size);
	return (newptr);
}
