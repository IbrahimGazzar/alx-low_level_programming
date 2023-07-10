#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - creates  string that concats two given strings
 * @s1: the string in the beginning
 * @s2: the string at the end
 *
 * Return: the concatted string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i;
	int k;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	i = 0;
	k = 0;
	if (newstr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i <= (int)strlen(s1); i++)
		{
			newstr[k] = s1[i];
			k++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i <= (int)strlen(s2); i++)
		{
			newstr[k] = s2[i];
			k++;
		}
	}
	newstr[++k] = '\0';
	return (newstr);
}
