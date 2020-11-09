#include "holberton.h"

/**
 * append_text_to_file - append to file
 * @filename: name of file
 * @text_content: test to append
 * Return: 1 success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len;
	int fd, fdwrite;

	if (filename == NULL)
	{
		return (-1);
	}
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	fdwrite = write(fd, text_content, len);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
