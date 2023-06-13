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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
