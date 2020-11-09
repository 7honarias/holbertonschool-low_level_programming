#include <stdlib.h>
#include "holberton.h"
/**
 * read_tetfile - reads a text file and prints i
 * @filename: file name to read
 * @letters: int letters
 * Return: number of letters or 0 if file name es NULL
 *
 */

long int read_textfile(const char *filename, int letters)
{
	int fd;
	long int fdwrite, fdread, fdclose;
	char *memory;

	if (filename == NULL)
	{
		return (0);
	}
	memory = malloc(sizeof(char) * letters);
	if (memory == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	fdread = read(fd, memory, letters);
	if (fdread == -1)
		return (-1);

	fdwrite = write(STDOUT_FILENO, memory, fdread);
	if (fdwrite == -1)
		return (-1);

	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);

	return (fdread);
}
