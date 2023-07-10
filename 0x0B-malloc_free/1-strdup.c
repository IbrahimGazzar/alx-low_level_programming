#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that creates a copy of a given string
 * @str: string to be copied
 *
 * Return: pointer to the newly allocated memory space
 */

char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(str));
	i = 0;
	while (1)
	{
		newstr[i] = str[i];
		if (newstr == NULL)
			return (NULL);
		if (str[i] == '\0')
			break;
		i++;
	}
	return (newstr);
}
