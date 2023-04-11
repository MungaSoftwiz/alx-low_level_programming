#include <stdio.h>
#include "main.h"
#define BUFSIZE 1024

void close_f(int fd);

/**
 * close_f - function closes file descriptors.
 * @fd: file descriptor to be closed.
 * Desceiption: exit with code 100 if close_f function fails.
 */

void close_f(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents of a file to another.
 * @argc: the number of command line arguments suppled.
 * @argv: an array of pointers to the arguments.
 *
 * Description: if argc is incorrect exit with code 97.
 *		if file_from does not exist, cannot be read, exit with code 98.
 *		if file_to cannot be created or written to , exit with code 99.
 *		if file_to or file_from cannot be closed , exit with code 100.
 *
 * Return: 0(success).
 */

int main(int argc, char *argv[])
{
	int fd_f1, fd_f2;
	char buf[BUFSIZE];
	int rd_val, wr_val;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp f1 f2\n");
		exit(97);
	}

	fd_f1 = open(argv[1], O_RDONLY);
	if (fd_f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_f2 = open(argv[2], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	if (fd_f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((rd_val = read(fd_f1, buf, BUFSIZE)) > 0)
	{
		wr_val = write(fd_f2, buf, rd_val);
		if (wr_val < rd_val)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}

		close(fd_f1);
		close(fd_f2);

		return (0);
}
