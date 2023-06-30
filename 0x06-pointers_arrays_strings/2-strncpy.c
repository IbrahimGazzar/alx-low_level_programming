#include "main.h"

/**
 * _strncpy - copy one string into another, with a limit of n bytes
 * @dest: pointer to the string to be copied into
 * @src: the source of the string
 * @n: byte limit
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cnt;
	char *newstr;

	newstr = dest;
	cnt = 0;
	while (cnt < n)
	{
		*dest = *src;
		dest++;
		cnt++;
		if (*src == '\0')
			break;
		src++;
	}
	while (cnt < n)
	{
		*dest = '\0';
		dest++;
		cnt++;
	}
	return (newstr);
}
