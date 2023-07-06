#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: Pointer to the head node
 * @index: Index of node to be deleted
 *
 * Return: 1(Success) or -1(Error)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *del = NULL;
	unsigned int num;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);

		return (1);
	}

	for (num = 0; temp != NULL && num < (index - 1); num++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}

	del = temp->next;
	temp->next = del->next;
	free(del);

	return (1);
}
