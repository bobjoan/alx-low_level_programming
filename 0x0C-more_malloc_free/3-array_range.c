#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = (int *) malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
