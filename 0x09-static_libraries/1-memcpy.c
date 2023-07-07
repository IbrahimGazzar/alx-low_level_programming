#include "main.h"

/**
 * _memcpy - copies a specified number of bytes from one memory area to another
 * @dest: memory area where the data is copied
 * @src: memory area where the data is copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *newstr;

	newstr = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (newstr);
}
