#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: the name of the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if  (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
