#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer on head of list
 * @n: value of node to add.
 *
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *cursor;

	if (!head)
		return (0);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (!*head)
	{
		new_node->prev = 0;
		return (*head = new_node);
	}

	cursor = *head;
	while (cursor->next)
		cursor = cursor->next;

	cursor->next = new_node;
	new_node->prev = cursor;
	return (new_node);
}
