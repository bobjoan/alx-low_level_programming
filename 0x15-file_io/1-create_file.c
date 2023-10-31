#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename:  name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_written;

	if (filename == NULL)
		return (-1);
	/*open with flags: O_CREAT - create file if it doesn't exist
	 * O_WRONLY: write only mode
	 * O_TRUNC: truncate file if it exists
	 * set permission to rw------- (0600)
	 */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
