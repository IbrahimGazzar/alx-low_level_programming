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
	int length;
	int pos;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;
	newstr = malloc(sizeof(char) * (length + 1));
	if (newstr == NULL)
		return (NULL);
	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(newstr + pos, av[i]);
		pos += strlen(av[i]);
		newstr[pos] = '\n';
		pos++;
	}
	newstr[pos] = '\0';
	return (newstr);
}
