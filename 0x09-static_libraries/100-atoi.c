#include "main.h"

/**
 * _atoi - a to aii
 * @s: string to be converted
 *
 * Description: A function that converts a string tp an integer
 *
 * Return: the integer convert
 */

int _atoi(char *s)
{
	int index;
	int num = 0;
	int sig = -1;
	int brk = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			sig = sig * -1;
		}

		if (s[index] >= '0' && s[index] <= '9')
		{
			num = num * 10;
			num = num - (s[index] - '0');

			brk = 1;
		}

		else if (brk == 1)
		{
			break;
		}
	}

	num = sig * num;

	return (num);
}
