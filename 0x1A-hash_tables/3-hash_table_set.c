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
	hash_node_t *new_node;

	if (!ht || !ht->array || !key || !*key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
		return (0);

	new_node->key = (char *) key;
	new_node->value = _strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}

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
