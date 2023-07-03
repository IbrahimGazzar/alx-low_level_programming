#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - looks for the first occurence of any char of accept in s
 * @s: string to be searched in
 * @accept: string whose bytes are searched for
 *
 * Return: pointer to first match in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;
		while (*ptr != '\0')
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		s++;
	}
	return (NULL);
}
