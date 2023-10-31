#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content:  NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_written;

	if (filename == NULL)
		return (-1);

	/*
	 * open with flags: O_WRONLY - write only mode
	 * O_APPEND - append to end of file
	 * set permissions to rw------- (0600)
	 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content && text_content[len])
		len++;
	n_written = write(fd, text_content, len);
	if (n_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
