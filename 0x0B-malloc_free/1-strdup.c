#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: pointer to the string to be copied
 *
 * Descripiton: A function that duplicates a string
 *
 * Return: ptr or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
		;

	ptr = malloc(sizeof(char) * (index + 1));

	if (ptr == NULL || len == 0)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		ptr[index] = str[index];
	}
	ptr[index] = '\0';

	return (ptr);
}
