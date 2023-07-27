#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a given list
 * @h: list to be printed
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t num;


	if (h == NULL)
		return (0);
	ptr = h;
	num = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", ptr->len, ptr->str);
		num++;
		ptr = ptr->next;
	}
	return (num);
}
