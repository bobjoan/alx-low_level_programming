#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 * @x: value to raise
 * @y: power to raise value of x to
 * Return: function should return
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y <= 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
