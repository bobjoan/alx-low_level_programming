#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * isdigit - checks if a string contains a non-digit char
 * @argc: ...
 * @argv: ...
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
