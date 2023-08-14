#include "hash_tables.h"

/**
 * hash_table_set - function to set key/values on hash table
 * @ht: hash table to be created
 * @key: key to set
 * @value: value to set
 *
 * Return: 1, if data set is successful, 0, otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key)
		return (0);

	/* duplicates the key and value to set */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	key_copy = strdup(key);
	if (key_copy == NULL)
		return (0);

	/* get the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* If key value exists */
	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}

	/* if key doesn't exist */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}

	/* Initializing the new_node */
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index])
	{
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;

	return (1);
}
