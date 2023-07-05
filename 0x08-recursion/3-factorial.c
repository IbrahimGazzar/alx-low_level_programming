#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: given number
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n--));
}
