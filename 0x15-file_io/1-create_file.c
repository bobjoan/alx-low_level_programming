#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: pointer to a character
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		write(file, text_content, strlen(text_content));
	}

	close(file);
	return (1);
}
