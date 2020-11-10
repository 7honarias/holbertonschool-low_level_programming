#include "holberton.h"
/**
 * errorMsg - show error and exit
 * @exitCode: flaq STDERR_FILENO
 * @msg: mensage to show
 * @fileName: name of file to fail
 * Return: Nothing void
 *
 */

void errorMsg(int exitCode, const char *msg, const char *fileName)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, fileName);
	exit(exitCode);
}
/**
 * main - function copy file in other file
 * @ac: number of string
 * @av: strings
 * Return: Always 0
 */


int main(int ac, char **av)
{
	int file_from, file_to, fdread, fdwrite, cl_from, cl_to;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		errorMsg(98, "Error: Can't read from file", av[1]);

	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		errorMsg(99, "Error: Can't write to NAME_OF_THE_FILE", av[2]);

	for (fdread = read(file_from, buffer, 1024); fdread > 0;
	     fdread = read(file_from, buffer, 1024))
	{
		fdwrite = write(file_to, buffer, fdread);
		if (fdwrite == -1)
			errorMsg(99, "Error: Can't write to", av[2]);

	}
	if (fdread == -1)
		errorMsg(98, "Error: Can't close fd", av[1]);

	cl_from = close(file_from);
	if (cl_from == -1)
		errorMsg(100, "Error: Can't close fd", av[1]);

	cl_to = close(file_to);
	if (cl_to == -1)
		errorMsg(100, "Error: Can't close fd", av[2]);

	return (0);
}
