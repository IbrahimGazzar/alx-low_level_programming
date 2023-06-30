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
	int k;
	int len;
	char *newstr;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		len++;
	len++;
	k = 0;
	*newstr = (char*)malloc(len * sizeof(char));
	for (i = 0; dest[i] != '\0'; i++, k++)
		newstr[k] = dest[i];
	for (i = 0; src[i] != '\0'; i++, k++)
		newstr[k] = src[i];
	return (newstr);
}
