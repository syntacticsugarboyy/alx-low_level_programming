#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination string
 * @src: string to be appended
 * @n: number of characters to be appended
 *
 * Description: A function that catenates n characters between strings
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	char *s = src;
	int i;

	while (*ptr != '\0')
		ptr++;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	if (n > i)
	{
		while (*src != '\0')
		{
			*ptr = *src;
			ptr++;
			src++;
		}
	}
	else
	{
		int j;

		for (j = 0; j < n; j++)
		{
			*ptr = src[j];
			ptr++;
		}
	}
	return (dest);
}
