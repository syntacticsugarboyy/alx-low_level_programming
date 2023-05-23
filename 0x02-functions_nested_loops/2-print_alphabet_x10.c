#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 *
 * Description: A funtion that prints 10x the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int no_loops;

	for (no_loops = 0; no_loops <= 9; no_loops++)
	{
		for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}

		putchar('\n');
	}
}
