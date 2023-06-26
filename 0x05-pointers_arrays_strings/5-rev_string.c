#include "main.h"
#include <stdio.h>

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
	int length;
	char temp;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
