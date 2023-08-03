#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - finds the required bits to be flipped for two ints to be equal
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int bits;

	bits = 0;
	i = 1;
	while (i < n || i < m)
		i <<= 1;
	while (i > 0)
	{
		if ((m & i) != (n & i))
			bits++;
		i >>= 1;
	}
	return (bits);
}
