#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* read_textfile - reads a text file
* @filename: name of file to read
* @letters: text to read
* Return:  actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_bytes;

	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY, 0600);
	if (file == -1)
	{
		return (0);
	}
	read_bytes = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_bytes);
	{
		close(file);
		free(buffer);
		return (read_bytes);
	}
}

