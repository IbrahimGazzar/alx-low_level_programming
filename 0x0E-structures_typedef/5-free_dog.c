#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees a variable of type dog_t
 * @d: pointer at the variable to be freed
 *
 * Return: no return value
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
