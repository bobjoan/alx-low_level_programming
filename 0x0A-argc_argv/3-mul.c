#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int(__attribute__((unused))n1),(__attribute__((unused))n2);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
	}
	return (0);
}
