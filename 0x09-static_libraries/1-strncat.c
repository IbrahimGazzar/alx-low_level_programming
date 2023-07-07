#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from source
 * @dest: First string, destination
 * @src: second string, source
 * @n: max number of bytes taken from src
 *
 * Return: pointer point at dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *newstr;
	int src_cnt;

	newstr = dest;
	src_cnt = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && src_cnt < n)
	{
		*dest = *src;
		dest++;
		src++;
		src_cnt++;
	}
	*dest = '\0';
	return (newstr);
}
