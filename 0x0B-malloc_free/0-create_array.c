#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of char
 * @c: array of char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; size > i; i++)
	{
		a[i] = c;
	}

	return (a);
}

