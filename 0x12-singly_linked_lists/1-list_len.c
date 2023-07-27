#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t num;


	if (h == NULL)
		return (0);
	ptr = h;
	num = 0;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
