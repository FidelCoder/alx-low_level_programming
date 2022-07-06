#include "hash_tables.h"

hash_node_t *create_t(const char *key, const char *value);
/**
 * hash_table_set - inserting value
 * @ht : hash table
 * @key : Key
 * @value : value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *node;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		current = create_t(key, value);
		if (current == NULL)
			return (0);
		ht->array[index] = current;
		return (1);
	}
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	current = ht->array[index];
	node = create_t(key, value);
	if (node == NULL)
		return (0);
	node->next = current;
	ht->array[index] = node;
	if (ht->array[index] == NULL)
		return (0);
	return (1);
}
/**
 * create_t - create an item
 * @key : key
 * @value : value
 * Return: Node
 */
hash_node_t *create_t(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}
