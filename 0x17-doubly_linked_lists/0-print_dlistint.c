#include "lists.h"

/**
 * print_dlistint - prints all the elements in a doubly linked list
 * @h: head of the list to be printed
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		num++;
		ptr = ptr->next;
	}
	return (num);
}
