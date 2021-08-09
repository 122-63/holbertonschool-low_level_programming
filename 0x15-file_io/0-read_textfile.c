#include "main.h"
/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output.
 * @filename:puntero
 * @letters:variable
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rd, op;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	write(STDOUT_FILENO, buf, rd);

	if (op == -1)
	{
		return (0);
	}
	free (buf);
	close (op);
	return (rd);
}
