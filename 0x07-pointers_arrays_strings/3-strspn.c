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
	int temp;
	int temp1;

	occ = 0;
	temp = 0;
	while (*ss != '\0')
	{
		temp1 = temp;
		while (*accept != '\0')
		{
			if (*ss == *accept)
			{
				temp++;
				break;
			}
			accept++;
		}
		if (temp1 == temp)
		{
			if (temp > occ)
				occ = temp;
			temp = 0;
		}
		
	}
	return (occ);
}
