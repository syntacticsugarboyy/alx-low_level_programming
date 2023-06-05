#include "main.h"

/**
 * _strchr - searches for a character
 * @s: pointer to the string
 * @c: character to be searched for
 *
 * Description: A function that locates character in a string
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}

	return (NULL);

}
