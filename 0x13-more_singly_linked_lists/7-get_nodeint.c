#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds a node by its index
 * @head: pointer to node to start counting from
 * @index: n-th node after head
 *
 * Return: node of the given index, NULL if non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (index > 0)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		index--;
	}
	return (ptr);
}
