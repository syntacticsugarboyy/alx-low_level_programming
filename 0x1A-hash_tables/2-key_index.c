#include "hash_tables.h"

/**
 * key_index - key-index
 * @key: key
 * @size: size of hash table
 *
 * Description: A function that returns the index of a key
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
