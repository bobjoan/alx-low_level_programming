#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n")
			return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n")
			return (2);
	}
	char command[100];

	sprintf(command, "objdump -d ./main | grep 'main:' | cut -d':' -f2 |
			cut -d' ' -f2-%d", num_bytes);

	FILE *fp = popen(command, "r");

	if (fp == NULL)
	{
		printf("Error\n");
		return (3);
	}
	char opcode[3];

	while (fscanf(fp, "%2hhx", opcode) == 1)
	{
		printf("%s", opcode);
	}
	printf("\n");
	pclose(fp);
	return (0);
}
