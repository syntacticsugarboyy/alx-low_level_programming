#include "lists.h"

/**
 * dlistint_len - prints the length of a linked list
 *
 * Return: num_nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
