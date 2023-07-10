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
	int length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1) + strlen(s2);
	newstr = malloc(sizeof(char) * (length + 1));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < (int)strlen(s1); i++)
		newstr[i] = s1[i];
	for (i = strlen(s1); i < (int)length; i++)
		newstr[i] = s2[i - strlen(s1)];
	newstr[length] = '\0';
	return (newstr);
}
