#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write the file
 *
 * Return: 1 on success, -1 on failure, if filename is null return -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, w_fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i] != '\0')
		i++;

	w_fd = write(fd, text_content, i);

	if (w_fd == -1)
		return (-1);

	close(fd);
	return (1);
}
