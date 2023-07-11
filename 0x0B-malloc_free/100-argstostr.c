#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - concats all arguements given to the program
 * @ac: number of arguements
 * @av: array holding the arguements
 *
 * Return: concated string
 */

char *argstostr(int ac, char **av)
{
	char **str;
	int i;
	int j;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (ac - 1));
	for (i = 1; i < ac; i++)
	{
		str[i - 1] = malloc(sizeof(char) * strlen(av[i]));
		if (str[i - 1] == NULL)
		{
			for (j = 0; j < i - 1; j++)
				free(str[j]);
			free(str);
			return (NULL);
		}
		str[i - 1] = av[i];
	}
	newstr = str[0];
	for (i = 0; i < (ac - 1); i++)
	{
		if (i > 0)
		{
			*newstr = '\n';
			newstr++;
		}
		while (*str[i] != '\0')
		{
			*newstr = *str[i];
			newstr++;
			str[i]++;
		}
	}
	*newstr = '\n';
	return (newstr);
}
