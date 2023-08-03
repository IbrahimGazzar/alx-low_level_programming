#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: pointer to the number to be manipulated
 * @index: index of the bit to be manipulated
 *
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i = 1;
	while (index)
	{
		i <<= 1;
		index--;
	}
	if (*n & i)
		return (-1);
	*n += i;
	return (1);
}
