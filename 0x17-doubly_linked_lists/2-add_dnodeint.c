#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: pointer on head of list
 * @n: value of node to add.
 *
 * Return: Address of new head or NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (0);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->prev = 0;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;

	return (*head = new_node);
}
