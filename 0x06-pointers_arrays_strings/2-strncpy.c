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

	cnt = 0;
	while (*src != '\0' && cnt < n)
	{
		*dest = *src;
		dest++;
		src++;
		cnt++;
	}
	*dest = '\0';
	return (dest);
}
