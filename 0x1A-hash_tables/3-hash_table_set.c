#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to add to
 * @key: Key to add
 * @value: Value to add
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new_node, *cursor;

	if (!ht || !ht->array || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	cursor = *(ht->array + index);

	while (cursor)
	{
		if (!strcmp(cursor->key, key))
		{
			free(cursor->value);
			cursor->value = _strdup(value);
			return (1);
		}
		cursor = cursor->next;
	}

	new_node = create_new_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = *(ht->array + index);
	*(ht->array + index) = new_node;
	return (1);
}

/**
 * _strlen - calculates length of a string
 * @s: String
 * Return: Number of characters in string
 */
unsigned int _strlen(const char *s)
{
	unsigned int count = 0;

	while (s[count++])
		;

	return (--count);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to be copied.
 * Return: pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (!str)
		return (0);

	len = _strlen(str);

	dup = malloc(len + 1);

	if (!dup)
		return (0);

	i = 0;
	while ((dup[i++] = str[i]))
		;

	return (dup);
}

/**
 * create_new_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, 0 on failurre
 */

hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == 0)
		return (0);

	new_node->key = _strdup(key);
	new_node->value = _strdup(value);
	new_node->next = 0;

	return (new_node);
}
