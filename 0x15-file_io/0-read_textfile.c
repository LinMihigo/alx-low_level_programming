#include "main.h"
/**
 * read_textfile - read a text file and prints it to STDOUT
 * @filename: file pointer
 * @letters: expected number of letters
 * Return: num letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);


	fd = open(filename, O_RDONLY, 0);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
