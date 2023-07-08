#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number 
 * @index: number starting from 0 of the bit to get
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);

}
