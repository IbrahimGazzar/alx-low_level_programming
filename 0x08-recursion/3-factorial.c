\0;276;0c#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: given number
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (0);
	return (n * factorial(n - 1));
}
