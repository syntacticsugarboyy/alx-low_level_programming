#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: A function that prints letters of the alphabet
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
