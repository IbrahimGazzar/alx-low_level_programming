#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: a pointer to the result string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen;
	string newstr;

	destlen = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		newstr[i] = dest[i];
		destlen = i + 1;
	}
	for (i = 0; src[i] != '\0'; i++)
		newstr[i + destlen] = src[i];
	return (newstr);
}
