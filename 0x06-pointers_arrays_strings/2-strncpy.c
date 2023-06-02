#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n: number of bytes to be copied
 *
 * Description: A function that copies a string
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
