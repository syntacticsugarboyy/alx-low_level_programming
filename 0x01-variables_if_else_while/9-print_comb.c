#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '8'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');

	return (0);
}
