#include "holberton.h"
#define BUF_SIZE 1024
/**
 * r_error - prints read error and exits
 * @source: points to source file
 *
 * Return: 98
 */
void r_error(char *source)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
	exit(98);
}
/**
 * w_error - prints write error and exits
 * @target: points to target file
 *
 * Return: 99
 */
void w_error(char *target)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
	exit(99);
}
/**
 * c_error - prints close error and exits
 * @cls: close value
 *
 * Return: 100
 */
void c_error(int cls)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cls);
	exit(100);
}
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int r_fd, w_fd, rd_val, wr_val;
	char *buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		r_error(argv[1]);
	if (argv[2] == NULL)
		w_error(argv[2]);
	r_fd = open(argv[1], O_RDONLY);
	w_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd_val = read(r_fd, buffer, BUF_SIZE);
	if (rd_val == -1)
		r_error(argv[1]);
	while (rd_val != 0)
	{
		wr_val = write(w_fd, buffer, rd_val);
		if (wr_val == -1 || wr_val != rd_val)
			w_error(argv[2]);
		rd_val = read(r_fd, buffer, BUF_SIZE);
	}
	rd_val = close(r_fd);
	wr_val = close(w_fd);
	return (rd_val == -1 ? c_error(r_fd) : wr_val == -1 ?
		c_error(w_fd) : 0);
}
