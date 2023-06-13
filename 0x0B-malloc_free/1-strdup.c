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
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)

	len = index + 1;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL || len == 0)
	{
		return (NULL);
	}

	_strcpy(ptr, str);

	return (ptr);
}
