#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that uses putchar to
 *		print letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}