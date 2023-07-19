#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract one number from another
 * @a: number to be subtracted from
 * @b: subtractor
 *
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two number
 * @a: first number
 * @b: second number
 *
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide one number by another
 * @a: divident
 * @b: divisor
 *
 * Return: Quoitent of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - get the modulus of a by b
 * @a: divident
 * @b: divisor
 *
 * Return: Remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
