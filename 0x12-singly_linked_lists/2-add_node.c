#include "lists.h"

/**
 * add_node - adds a node
 * @head: double pointer to head
 * @str: string
 *
 * Description: A function that adds node at the head
 *
 * Return: new
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new_node;

	while (str[len])
	{
		len++;
	}

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
