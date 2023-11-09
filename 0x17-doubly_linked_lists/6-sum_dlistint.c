#include "lists.h"

/**
 * sum_dlistint - Computes sum of values in list's nodes.
 * @head: head of list.
 *
 * Return: int sum of nodes' values or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
