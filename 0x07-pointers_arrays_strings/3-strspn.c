#include "main.h"

/**
 * _strspn - string span
 * @s: pointer to the string
 * @accept: pointer to the substring in consideration
 *
 * Description: A function that gets the length of a prefix substring
 *
 * Return: length len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	unsigned int sindex;
	unsigned int aindex;

	for (sindex = 0; s[sindex] != '\0'; sindex++)
	{
		len = 0;
		for (aindex = 0; accept[aindex] != '\0'; aindex++)
		{
			if (s[sindex] == accept[aindex])
			{
				len = 1;
				break;
			}
		}
		if (len == 0)
		{
			return (sindex);
		}
	}

	return (sindex);
}
