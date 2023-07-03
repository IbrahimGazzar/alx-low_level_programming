#include "main.h"

/**
 * _strspn - checks if characters from a string exists in another
 * @s: string to be searched
 * @accept: string whose characters are searched
 *
 * Return: number of occurences of accept characters in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int occ;
	int match;
	char *ptr;

	ptr = accept;
	occ = 0;
	while (*s != '\0')
	{
		match = 0;
		for (ptr; *ptr != '\0'; ptr++)
		{
			if (*s == *ptr)
			{
				match = 1;
				break;
			}
		}
		if (!match)
			return (occ);
		occ++;
		s++;		
	} 
	return (occ);
}
