#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be halved
 *
 * Description: A function that prints half a string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
	}

	if ((index % 2) == 0)
	{
		for (index = (index / 2); str[index] != '\0'; index++)
		{
			_putchar(str[index]);
		}
	}

	else
	{
		for (index = (index - 1) / 2; str[index] != '\0'; index++)
		{
			_putchar(str[index + 1]);
		}
	}

	_putchar('\n');
}
