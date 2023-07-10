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
		if (newstr == NULL)
			return (NULL);
		if (str[i] == '\0')
		{
			newstr[i] = str[i];
			return (newstr);
		}
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
