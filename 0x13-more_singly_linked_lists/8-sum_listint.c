#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}
