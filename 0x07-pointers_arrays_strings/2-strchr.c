#include "main.h"

/**
 * _strchr - searches for a character
 * @s: pointer to the string
 * @c: character to be searched for
 *
 * Description: A function that locates character in a string
 *
 * Return: pointer to the character s[index]
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}

	return (NULL);

}
