#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specified index
 * @head: Pointer to thr head node
 * @idx: index for new node to be placed
 * @n: Node's data
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = (*head);
	unsigned int num;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;

		return (new_node);
	}

	for (num = 0; temp != NULL && num < idx; num++)
	{
		if (num != (idx - 1))
		{
			temp = temp->next;
		}
		else
		{
			new_node->next = temp->next;
			temp->next = new_node;

			return (new_node);
		}
	}
	return (NULL);
}
