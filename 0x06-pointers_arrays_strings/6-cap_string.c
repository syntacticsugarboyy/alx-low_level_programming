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
	char *del = " \t\n,.!?()\"{};";
	int del_i = 0;

	for (index = 0; b[index] != '\0'; index++)
	{
		del_i = 0;

		while (del[del_i] != '\0')
		{
			if (b[index] == del[del_i])
			{
				if (b[index] == '\t')
				{
					b[index] = ' ';
				}
				next = 1;
				break;
			}
			del_i++;
		}

		if (next && (b[index] >= 97 && b[index] <= 122))
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
