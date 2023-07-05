#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of a given number
 * @n: base number
 *
 * Return: square root of n, -1 if doesn't exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_calc(n, 2));
}
/*
 * sqrt_calc - checks various numbers to be a square root or not
 * @n: base number
 * @div: number to have n divided by and tested
 *
 * Return: square root of n, -1 if it doesn't exist
 */

int sqrt_calc(int n, int div)
{
	if (div > n / 2)
		return (-1);
	if (div * div == n)
		return (div);
	return (sqrt_calc(n, div + 1));
}

