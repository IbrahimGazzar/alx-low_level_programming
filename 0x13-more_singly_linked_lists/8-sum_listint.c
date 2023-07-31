#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums the content of list members
 * @head: pointer at first member of the list
 *
 * Return: sum of the entire list, 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
