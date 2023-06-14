#include "main.h"

/**
 * argstostr - args to string
 * @ac: argument count
 * @av: argument vector
 *
 * Description: A function that converts arguments to a string
 *
 * Return: args
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, n;
	int r = 0;
	int l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
		l++;
	}

	args = malloc(sizeof(char) * l);

	if (args == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			args[r] = av[i][n];
			r++;
		}
		if (args[r] == '\0')
		{
			args[r++] = '\n';
		}
	}
	args[r] = '\0';

	return (args);
}
