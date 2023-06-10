#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: A program that adds positive arguments
 *
 * Return: 0 (Success) or 1(Error)
 */

int main(int argc, char **argv)
{
	int index;
	int num;
	int sum = 0;

	for (index = 1; index < argc; index++)
	{
		num = is_num(argv[index]);

		if (num == -1)
		{
			printf("Error\n");

			return (1);
		}
		sum += atoi(argv[index]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * is_num - checks if a number or not
 * @c: char to be checked
 * Return: 0 or -1
 */

int is_num(char *c)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(c);

	while (i < len)
	{
		if (c[i] < '0' || c[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (c[i] - '0');
		i++;
	}
	return (num);
}

