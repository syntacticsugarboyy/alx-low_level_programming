#include "lists.h"

/**
 * add_nodeint_end - adds a node
 * @head: Double pointer to the head
 * @n: Data to be stored in the new node
 *
 * Description: A fucntion that adds a new node at the
 *		end of a linked list
 * Return: new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}

	else
	{
		current = *head;

		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
