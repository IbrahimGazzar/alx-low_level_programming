#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the largest prime factor of 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	long long int num = 612852475143;
	long long int factor;
	long long int i;

	factor = 1;
	for (i = 3; i < num / 2; i += 2)
	{
		if (num % i == 0 && i > factor)
			factor = i;
	}
	printf("%lld\n", factor);
}
