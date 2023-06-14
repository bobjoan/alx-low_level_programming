#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: new string
 * Return: ....
 */

char *_strdup(char *str)
{

	int i = 0, s = 1;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[s])
	{
		s++;
	}
	a = malloc((sizeof(char) * s) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	while (s > i)
	{
		a[i] = str[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
