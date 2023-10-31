#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of file
 * @letters: letters to read
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_read, n_written;
	char *buffer;
	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	n_read = fread(buffer, sizeof(char), letters, fp);
	if (n_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	buffer[n_read] = '\0';

	n_written = fwrite(buffer, sizeof(char), n_read, stdout);
	if (n_written != n_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (n_written);
}
