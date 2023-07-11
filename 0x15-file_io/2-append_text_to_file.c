#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  name of the file
 * @text_content: pointer to a character
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t length;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = write(file, text_content, strlen(text_content));

		if (length == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
