#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 * Description: A function that reverses objects in arrays
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index;
	int tmp;
	int end = n - 1;

	for (index = 0; index < end; index++)
	{
		tmp = a[index];
		a[index] = a[end];
		a[end] = tmp;

		end--;
	}
}
