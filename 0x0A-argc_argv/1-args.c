#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argv: argument vector
 * @argc: argument count
 * Return: ...
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc -1);

	return (0);
}
