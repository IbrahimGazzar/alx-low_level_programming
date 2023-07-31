#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - measures length of a list
 * @h: list to be counted
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t len;

	if (h == NULL)
		return (0);
	ptr = h;
	len = 0;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
