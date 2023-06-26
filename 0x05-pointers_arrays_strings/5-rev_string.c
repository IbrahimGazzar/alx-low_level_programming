#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 *
 * Return: no return value
 */

void rev_string(char *s)
{
	int i;
	int j;
	char ss[1000];

	for (i = 0; s[i] != '\0'; i++)
		continue;
	j = 0;
	while (i >= 0)
		ss[j++] = s[i--];
	for (i = 0; s[i] != '\0'; i++)
		s[i] = ss[i];
}
