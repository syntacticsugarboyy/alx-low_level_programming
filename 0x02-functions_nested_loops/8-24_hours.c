#include "main.h"

/**
 * jack_bauer - Special Agent
 *
 * Description: A function that prints every minute of a day of Jack
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
