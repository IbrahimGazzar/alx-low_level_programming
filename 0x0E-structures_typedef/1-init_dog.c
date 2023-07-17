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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
