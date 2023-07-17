#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new variable of type dog_t
 * @name: input for the name field
 * @age: input for the age field
 * @owner: input for the owner field
 *
 * Return: the new variable of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *dog_name;
	char *dog_owner;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	doggo = malloc(sizeof(float) + strlen(name) + strlen(owner) + 2);
	if (doggo == NULL)
		return (NULL);
	dog_name = name;
	dog_owner = owner;
	doggo->name = dog_name;
	doggo->age = age;
	doggo->owner = dog_owner;
	return (doggo);
}
