#include "hash_tables.h"

/**
 * hash_table_set - adds a node to the hash table
 * @ht: Hash Table under consideration
 * @key: Key
 * @value: Value associated with the key
 *
 * Return: 1(Success) or 0(Error)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node = NULL, *old_node = NULL;
	unsigned long int index = 0;

	if (key == NULL || value == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);
	(new_hash_node)->key = strdup(key);
	(new_hash_node)->value = strdup(value);
	(new_hash_node)->next = NULL;
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_hash_node;
		return (1);
	}
	else
	{
		old_node = (ht->array)[index];
		while (old_node != NULL)
		{
			if (strcmp(old_node->key, key) == 0)
			{
				free(old_node);
				old_node->value = strdup(value);
				free(new_hash_node->key);
				free(new_hash_node->value);
				free(new_hash_node);
				return (1);
			}
			old_node = old_node->next;
		}
		old_node = (ht->array)[index];
		new_hash_node->next = old_node;
		(ht->array)[index] = new_hash_node;
		return (1);
	}
}
