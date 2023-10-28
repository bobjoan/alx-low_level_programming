#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: the endianness
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
