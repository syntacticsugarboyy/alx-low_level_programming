#include "hash_tables.h"

/**
 * hash_table_set - sets a hash table
 *
 * @ht: Hash Table
 * @key: Key
 * @value: Value associated with Key
 *
 * Description: A function that adds an element to a hash table
 *
 * Return: 1(Success) or 0(Error)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *temp;
	char *new_val;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
			|| strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	item = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_val = strdup(value);
			if (new_val == NULL)
			{
				return (0);
			}
			free(temp->value);
			temp->value = new_val;
			return (1);
		}
		temp = temp->next;
	}

	item = hash_node_make(key, value);
	if (item == NULL)
	{
		return (0);
	}

	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}

/**
 * hash_node_make - creates a new hash_node
 * @key: key
 * @value: value
 *
 * Return: node
 */

hash_node_t *hash_node_make(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}
