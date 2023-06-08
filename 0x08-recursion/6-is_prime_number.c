#include <stdio.h>
#include "main.h"

int checker(int n, int a);

/**
 * checker - checks for prime number
 * @n: prime number
 * @a: iteration
 * Return: ...
 */

int checker(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % a == 0 && a >= 2)
	{
		return (0);
	}

	if ((n / a) < a)
	{
		return (1);
	}

	return (checker(n, a + 1));
}

/**
 * is_prime_number - he input integer is a prime number
 * @n: prime number
 * Return: ...
 */

int is_prime_number(int n)
{
	return (checker(n, 1));
}
