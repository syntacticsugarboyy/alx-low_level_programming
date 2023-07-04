#include "lists.h"

/**
 * list_len - lengths a list
 * @h: Poiinter to the head node
 *
 * Description: A function that returns the length of a list
 *
 * Return: len
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
