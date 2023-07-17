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
		printf("%s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: ");
	printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner != NULL)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
