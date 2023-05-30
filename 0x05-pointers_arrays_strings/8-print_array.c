#include "main.h"

/**
 * print_array - prints an array
 * @a: array under consideration
 * @n: number of elements to be printed
 *
 * Description: A function that prints n number of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
