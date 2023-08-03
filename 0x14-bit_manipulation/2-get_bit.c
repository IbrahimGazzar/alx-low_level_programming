#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to be checked in
 * @index: index of the bit to be checked in n
 *
 * Return: value of bit, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i = 1;
	while (index)
	{
		i <<= 1;
		index--;
	}
	if (i > n)
		return (-1);
	if (n & i)
		return (1);
	return (0);
}
