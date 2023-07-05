#include "main.h"

/**
 * is_prime_number - checks if a given number is prime or not
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n < -1)
		return (0);
	if (n == -1)
		return (1);
	return (prime_helper(n, n / 2));
}
/**
 * prime_helper - checks if a given number is prime
 * @n: number to be checked
 * @inc: variable used for testing n
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_helper(int n, int inc)
{
	if (inc < 2)
		return (1);
	if (n % inc == 0)
		return (0);
	return (prime_helper(n, inc - 1));
}
