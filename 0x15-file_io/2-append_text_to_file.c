#include "main.h"

/**
 * _strlen - function that finds the length of a string
 * @str: string
 * Return: Always
 */
size_t _strlen(char *str)
{
	size_t rit;

	for (rit = 0; str[rit]; rit++)
		;
	return (rit);
}

/**
 * append_text_to_file - function that appends a
 * text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: Always
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int geo;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	geo = open(filename, O_WRONLY | O_APPEND);
	if (geo == -1)
		return (-1);
	if (text_content != NULL)
		len = write(geo, text_content, _strlen(text_content));
	close(geo);
	if (len == -1)
		return (-1);
	return (1);
}
