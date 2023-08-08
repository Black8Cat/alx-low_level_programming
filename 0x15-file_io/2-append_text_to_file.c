#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: the NULL terminated string to add at
 *	the end of the file
 *
 * Return: If filename is NULL return -1
 *	If text_content is NULL, do not add anything to the file
 *	 Return 1 if the file exists and -1 if the file does not exist
 *	or if you do not have the required permissions
 *	to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
