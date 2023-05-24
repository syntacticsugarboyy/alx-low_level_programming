#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: input integer
 *
 * Description: A function thatprints numbers to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}

	printf("98\n");
}
