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
	ssize_t t, R, W;
	char *buff;

	R = open(filename, O_RDONLY);
	if (R == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(R, buff, letters);
	W = write(STDOUT_FILENO, buff, t);
	free(buff);
	close(R);
	return (W);
}
