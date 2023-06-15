#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: ...
 * Return: ...
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
