#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the list_t list to add the node to
 * @str: string to initialize the new node with
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cursor = *head;
	list_t *node = (list_t *) malloc(sizeof(list_t));

	if (!node)
		return (0);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (0);
	}
	node->len = strlen(str);
	node->next = 0;

	if (!cursor)
		*head = node;
	else
	{
		while (cursor->next)
			cursor = cursor->next;
		cursor->next = node;
	}
	return (node);
}
