#include "main.h"

/**
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int sindex;
	int aindex;

	for (sindex = 0; s[sindex] != '\0'; sindex++)
	{
		for (aindex = 0; accept[aindex] != '\0'; aindex++)
		{
			if (s[sindex] == accept[aindex])
			{
				return (&s[sindex]);
			}
		}
	}

	return (NULL);
}
