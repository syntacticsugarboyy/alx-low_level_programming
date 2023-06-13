#include "main.h"

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 *
 * Description: A function that concatenates two strings
 *
 * Return: pointer containing the joined srings
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		concat[len1] = s1[len1];
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		concat[len1] = s2[len2];

		len1++;
	}

	concat[len1] = '\0';

	return (concat);

}
