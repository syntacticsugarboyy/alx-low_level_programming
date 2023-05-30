#include "main.h"

/**
 * puts2 - puts too lol
 * @str: string to be put
 *
 * Description: A function that prints certain characters in a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if ((index % 2) == 0)
		{
			_putchar(str[index]);
		}
	}

	_putchar('\n');
}
