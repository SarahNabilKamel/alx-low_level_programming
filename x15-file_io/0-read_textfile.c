#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file name
 * @letters: letters
 * Return: number of letters or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t x;
	ssize_t w;
	ssize_t t;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	t = read(x, c, letters);
	w = write(STDOUT_FILENO, c, t);

	free(c);
	close(x);
	return (w);
}
