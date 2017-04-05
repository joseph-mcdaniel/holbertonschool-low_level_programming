#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: count of letters
 *
 * Return: Actual number of letters it could read and print -- if file cannot
 * be opened or read return 0, if filename is null return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_fd;
	char *buffer;

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	r_fd = read(fd, buffer, letters);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	if (r_fd == -1)
		return (0);

	write(STDOUT_FILENO, buffer, r_fd);

	close(fd);
	return (r_fd);
}
