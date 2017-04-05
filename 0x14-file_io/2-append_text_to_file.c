#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: file name
 * @text_content: null terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure -- if filename is null return -1
 * if text_content is null nothing is added, return 1 if the file exists
 * and -1 if the file does not exist or if not given permission
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, w_fd;

	fd = open(filename, O_APPEND | O_WRONLY, 0664);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
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
