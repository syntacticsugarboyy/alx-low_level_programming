#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head: Pointer to the head node
 * @n: Data to be assigned to the node
 *
 * Description: A function that adds a new node
 *		at the beginning of a linked list
 * Return: Pointer to the node(new_node)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	if ((*head) != NULL)
	{
		new_node->next = (*head);
	}
	(*head) = new_node;

	return (new_node);
}
