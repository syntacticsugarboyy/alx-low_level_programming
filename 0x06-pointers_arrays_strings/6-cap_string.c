#include "main.h"

/**
 * cap_string - capitalizes strings
 * @b: String to be capitalized
 *
 * Description: A function that capitalizes words in a string
 *
 * Return: pointer to the string
 */

char *cap_string(char *b)
{
	int index;
	int next;

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == ' ' ||
				b[index] == '\t' ||
				b[index] == '\n' ||
				b[index] == '!' ||
				b[index] == ',' ||
				b[index] == ';' ||
				b[index] == '.' ||
				b[index] == '"' ||
				b[index] == '?' ||
				b[index] == '(' ||
				b[index] == ')' ||
				b[index] == '{' ||
				b[index] == '}')
		{
			if (b[index] == '\t')
			{
				b[index] = ' ';
			}
			next = 1;
		}

		else if (next && (b[index] >= 97 && b[index] <= 122))
		{
			b[index] = b[index] - 32;
			next = 0;
		}

		else
		{
			next = 0;
		}
	}

	return (b);
}
