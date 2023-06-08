#include <stdio.h>
#include "main.h"

int _sqrt(int n, int a);

/**
 * _sqrt - natural square root of a number
 * @n: natural square root number
 * @a: iterate number
 * Return: the natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (a);
	}
	return (_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
