#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count
 * @av: argument vector
 * Return: NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}

		str[index] = '\n';
		index++;
	}

	str[len] = '\0';
	return (str);
}
