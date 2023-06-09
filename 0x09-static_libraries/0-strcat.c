#include "main.h"

/**
 * _strcat - catenates strings
 * @dest: Desctination string
 * @src: Source string
 *
 * Description: A function that concatenates two strings
 *
 * Return: catenated string
 */

char *_strcat(char *dest, char *src)
{
	int d_index;
	int s_index;

	for (d_index = 0; dest[d_index] != '\0'; d_index++)
	{
	}

	for (s_index = 0; src[s_index] != '\0'; s_index++)
	{
		dest[d_index++] = src[s_index];
	}
	dest[d_index] = '\0';

	return (dest);
}
