#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: head of the list
 *
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
