#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer pointing at first int
 * @b: pointer pointing at second int
 *
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
