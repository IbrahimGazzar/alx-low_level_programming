#include "lists.h"

/**
 * add_dnodeint - add a new node at the start of a doubly linked list
 * @head: list to be inserted in
 * @n: value of the node to be added
 *
 * Return: address of the new node, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	node->prev = NULL;
	*head = node;
	return (*head);
}
