#include "lists.h"

/**
 * sum_dlistint - sums the data in a doubly linked list
 * @head: start of the linked list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
