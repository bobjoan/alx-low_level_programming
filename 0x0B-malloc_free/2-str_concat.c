#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{

	int b = 0, c = 0, d = 0, e = 0;
	char *a;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[b])
		b++;
	while (s2[c])
		c++;
	e = b + c;
	a = malloc((sizeof(char) * e) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	c = 0;

	while (e > d)
	{
		if (d <= b)
		{
			a[d] = s1[d];
		}

		if (d >= b)
		{
			a[d] = s2[c];
			c++;
		}

		d++;
	}
	a[e] = '\0';
	return (a);
}

