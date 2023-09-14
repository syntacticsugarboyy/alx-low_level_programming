#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: Pointer to head of hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *p_node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (index = 0; ht->size != NULL; index++)
	{
		p_node = ht->array[index];

		while (p_node != NULL)
		{
			printf("'%s': '%s'", p_node->key, p_node->value);

			if (p_node->next != NULL || index < (ht->size - 1))
			{
				printf(", ");
			}
			p_node = p_node->next;
		}
	}

	printf("}\n");
}
