#include "main.h"

/**
 * string_nconcat - concatenates strings
 * @s1: First string
 * @s2: Second string
 * @n: number of characters to be appended
 *
 * Description: A function that concatenates two strings
 *
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int index1;
	unsigned int index2;

	for (index1 = 0; s1[index1] != '\0'; index1++)
		;
	for (index2 = 0; s2[index2] != '\0'; index2++);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < index2)
	{
		concat = malloc(sizeof(char) * (index1 + n));
	}
	else
		concat = malloc(sizeof(char) * (index1 + index2 + 1));

	if (concat == NULL)
		return (NULL);

	for (index1 = 0; s1[index1] != '\0'; index1++)
		concat[index1] = s1[index1];

	if (n < index2)
	{
		for (index2 = 0; index2 < n; index2++)
			concat[index1++] = s2[index2];
	}
	else
	{
		for (index2 = 0; s2[index2] != '\0'; index2++)
			concat[index1++] = s2[index2];
	}
	concat[index1] = '\0';
	return (concat);
}
