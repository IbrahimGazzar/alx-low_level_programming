#include "main.h"

/**
 * _memset - fills the first n bytes of the memory pointed to by s with b
 * @s: pointer pointing at a memory area
 * @b: character to fill the area
 * @n: the first bytes of the memory area s
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *news;

	news = s;
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (news);
}
