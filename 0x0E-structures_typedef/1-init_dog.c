#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes a variable of type dog
 * @d: pointer at the variable to be initialized
 * @name: name input
 * @age: age input
 * @owner: owner input
 *
 * Return: no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name == NULL)
		return;
	d->name = name;
	if (age < 0)
		return;
	d->age = age;
	if (owner == NULL)
		return;
	d->owner = owner;
}
