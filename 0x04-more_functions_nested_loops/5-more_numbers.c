#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Description: A function that prints 1 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int loop;
	int more;

	for (loop = 0; loop <= 9; loop++)
	{
		for (more = 0; more <= 14; more++)
		{
			if (more > 9)
			{
				_putchar((more / 10));
			}
			_putchar((more % 10));
		}
		_putchar('\n');
	}
}
