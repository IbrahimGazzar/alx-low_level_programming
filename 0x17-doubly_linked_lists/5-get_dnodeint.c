#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node with given index in the list
 * @head: start of the list to be searched
 * @index: index of the node to be reached
 *
 * Return: node address, NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
