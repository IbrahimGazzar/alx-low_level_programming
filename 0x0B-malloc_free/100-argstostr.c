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
	int i;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	newstr = av[1];
	for (i = 1; i < ac; i++)
	{
		if (i > 1)
		{
			*newstr = '\n';
			newstr++;
		}
		while (*av[i] != '\0')
		{
			*newstr = *av[i];
			newstr++;
			av[i]++;
		}
	}
	*newstr = '\n';
	return (newstr);
}
