#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i;
	int num;
	int sign;

	num = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + sign * (s[i] - 48);
		if (num > 0 && (s[i] < '0' || s[i] > '9'))
			break;
	}
	return (num);
}
