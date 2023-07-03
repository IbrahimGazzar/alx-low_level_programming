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
	char *ss;
	int occ;

	occ = 0;
	while (*accept != '\0')
	{
		ss = s;
		while (*ss != '\0')
		{
			if (*ss == *accept)
			{
				occ++;
				break;
			}
			ss++;
		}
		accept++;
	}
	if (*ss == *accept)
		occ++;
	return (occ);
}
