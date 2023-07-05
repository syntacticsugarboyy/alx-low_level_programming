#include "lists.h"

/**
 * pop_listint - Removes a node
 * @head: POinter to the head
 *
 * Description: A function that removes the head node of a list
 *
 * Return: Head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *temp;

	if ((head) == NULL || (*head) == NULL)
	{
		return (0);
	}

	head_data = (*head)->n;
	temp = (*head)->next;
	/* free((*head)->n); */
	free(*head);
	(*head) = temp;

	return (head_data);
}
