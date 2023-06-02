#include "main.h"

/**
 * string_toupper - changes to upper
 * @s: string
 *
 * Description: A function that changes a string to uppercase
 *
 */

char *string_toupper(char *s)
{
	char *str = s;

	for (; *str != '\0'; str++)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
	}

	return (s);
}
