#include "lists.h"
#include "string.h"
#include "stdlib.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list to add the node to
 * @str: string to initialize the new node with
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
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

	if (!*head)
		node->next = 0;
	else
		node->next = *head;

	*head = node;
	return (node);
}
