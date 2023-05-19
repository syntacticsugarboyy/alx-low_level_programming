#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in
 *		lowercase then in uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
