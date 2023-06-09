#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: superstring
 * @needle: subsrring
 *
 * Description: A function that finds a needle in a haystack
 *
 * Return: hay, haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*nee != '\0' && *haystack == *nee)
		{
			haystack++;
			nee++;
		}

		if (*nee == '\0')
		{
			return (hay);
		}

		haystack++;
	}

	return (NULL);
}
