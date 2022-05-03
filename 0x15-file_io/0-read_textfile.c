#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of text file
 * @letters: number of letter to read and print
 * Return: actual number of letter printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);

	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);
	free(buf);
	return (wr);

}
