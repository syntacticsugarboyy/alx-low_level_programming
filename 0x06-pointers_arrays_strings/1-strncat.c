#include "main.h"

/**
 * _strncat - catenates strings
 * @dest: Destination string
 * @src: Source string
 * @n: number of strings to be appended
 *
 * Description: A function that concatenate two strings
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s_src;
	int s_dest;

	for (s_dest = 0; dest[s_dest] != '\0'; s_dest++)
	{
	}

	for (s_src = 0; src[s_src] != '\0'; s_src++)
	{
	}

	if (n >= s_src)
	{
		for (s_src = 0; src[s_src] != '\0'; s_src++)
		{
			dest[s_dest] = src[s_src];

			s_dest++;
		}
	}

	else
	{
		for (s_src = 0; s_src < n; s_src++)
		{
			dest[s_dest] = src[s_src];

			s_dest++;
		}
	}

	return (dest);
}
