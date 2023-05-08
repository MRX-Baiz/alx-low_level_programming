#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *			to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: text file
 * Return: actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	O = open(filename, O_RDONLY);
	R = read(O, buf, letters);
	W = write(STDOUT_FILENO, buf, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(O);

	return (W);
}
