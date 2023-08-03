#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to a u_int
 * @b: binary number
 *
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num;
	const char *ptr;

	if (b == NULL)
		return (0);
	ptr = b;
	while (*ptr != '\0')
	{
		if (*ptr != '0' && *ptr != '1')
			return (0);
		ptr++;
	}
	i = 1;
	num = 0;
	for (ptr -= 1; ptr != (b - 1); ptr--)
	{
		if (*ptr == '1')
			num += i;
		i *= 2;
	}
	return (num);
}
