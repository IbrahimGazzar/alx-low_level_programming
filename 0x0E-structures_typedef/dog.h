#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - contains dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 *
 * Description: This structure defines dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
