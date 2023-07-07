#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: string to be counted
 *
 * Return: length of the given string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
