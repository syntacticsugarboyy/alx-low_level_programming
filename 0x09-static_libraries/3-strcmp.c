#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Description: A function that compares two strings
 *
 * Return: string difference n
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s2++;
	}

	return (0);
}
