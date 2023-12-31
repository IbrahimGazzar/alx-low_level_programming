#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets a bit of given index to 0
 * @n: pointer to the number to be manipulated
 * @index: index of the bit to be manipulated
 *
 * Return: 1 is successful, 0 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
		*n -= i;
	return (1);
}
