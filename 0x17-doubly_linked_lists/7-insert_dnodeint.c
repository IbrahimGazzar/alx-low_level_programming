#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in a given index
 * @h: doubly linked list to be inserted in
 * @idx: index to be inserted at
 * @n: data of the new node
 *
 * Return: address of the new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *node;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	for (idx = idx; idx > 0; idx--)
	{
		if (ptr == NULL)
		{
			free(node);
			return (NULL);
		}
		ptr = ptr->next;
	}
	node->n = n;
	node->next = ptr;
	node->prev = ptr->prev;
	(ptr->prev)->next = node;
	ptr->prev = node;
	return (node);
}
