#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the contents of a dog structure
 * @d: pointer at the structure
 *
 * Return: no return value
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name != NULL)
		printf("%s\n",d->name);
	else
		printf("(nil)\n");
	if (d->age != NULL)
		printf("%f\n",d->age);
	else
		printf("(nil)\n");
	if (d->owner != NULL)
		printf("%s\n",d->owner);
	else
		printf("(nil)\n");
	
}
