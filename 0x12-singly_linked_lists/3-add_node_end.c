#include "lists.h"

/**
 * add_node_end - adds an end node
 * @head: Double pointer to the head
 * @str: string
 *
 * Description: A function that adds node at the end of a list
 *
 * Return: last_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *last_node;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}

	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = last_node;
	}
	return (last_node);
}
