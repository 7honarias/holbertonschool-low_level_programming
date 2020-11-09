#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @content: text for fill the file
 * Return: 1 if is success and -1 if on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdwrite, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	fdwrite = write(fd, text_content, len);
	if (fdwrite == -1)
		return (-1);
	close(fd);
	return (1);
}
