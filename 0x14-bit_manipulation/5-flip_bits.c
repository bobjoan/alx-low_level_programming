#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial number to flip
 * @m: number flipped to
 * Return: number of bits need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, count = 0;

	bits = n ^ m;
	while (bits)
	{
		if (bits & 1)
			count++;

		bits >>= 1;
	}

	return (count);
}
