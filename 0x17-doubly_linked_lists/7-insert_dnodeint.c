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
	dlistint_t *ptr = *h, *node;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	while (ptr != NULL)
	{
		if (idx == 0)
		{
			node->next = ptr;
			node->prev = ptr->prev;
			(ptr->prev)->next = node;
			ptr->prev = node;
			return (node);
		}
		idx--;
		if (ptr->next == NULL)
			break;
		ptr = ptr->next;
	}
	if (idx == 0)
	{
		node->next = NULL;
		node->prev = ptr;
		ptr->next = node;
		return (node);
	}
	return (NULL);
}
