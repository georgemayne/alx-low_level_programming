#include "main.h"

/**
 * _strlen - function that finds the length of a string
 * @str: ptr to the str
 * Return: Always length of the string
 */
size_t _strlen(char *str)
{
	size_t g;

	for (g = 0; str[g]; g++)
		;
	return (g);
}

/**
 * append_text_to_file - function that appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated str to add at the end of the file
 * Return: Always 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
