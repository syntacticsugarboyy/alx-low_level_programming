#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at index
 * @head: Pointer to head node
 * @index: index of node
 *
 * Description: A fucntion thar returns the nth
 *		node of a linked list
 * Return: The node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int num;

	node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	for (num = 0; node != NULL && num < index; num++)
	{
		node = node->next;
	}

	return (node);
}
