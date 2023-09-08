#include "hash_tables.h"

/**
 * int key_index - gives the index of a key
 * @key: The key
 * @size: size of thw array of the hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	if (size != 0)
	{
		return (index % size);
	}

	return (0);
}
