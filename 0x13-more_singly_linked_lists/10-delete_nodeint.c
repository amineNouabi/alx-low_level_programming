#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *next_node;
	unsigned int i;

	if (!head)
		return (-1);

	if (!index)
	{
		if (!*head)
			return (-1);
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!current_node)
			return (-1);
		current_node = current_node->next;
	}

	if (!current_node || !current_node->next)
		return (-1);

	next_node = current_node->next->next;
	free(current_node->next);
	current_node->next = next_node;

	return (1);
}
