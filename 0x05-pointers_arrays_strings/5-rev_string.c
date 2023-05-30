#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 *
 * Description: A function that reverses a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int index = 0;
	int rev_pos;
	char tmp;

	for (; s[index] != '\0'; index++)
	{
	}

	index--;

	for (rev_pos = 0; index > rev_pos; rev_pos++)
	{
		tmp = s[index];
		s[index] = s[rev_pos];
		s[rev_pos] = tmp;

		index--;
	}
}
