#include "main.h"
/**
 * create_file - function that creates an array of chars, and initializes
 * @text_content: NULL terminated string
 * @filename: name of the file
 * Return: Always
 */
int create_file(const char *filename, char *text_content)
{
	int geo, geo_write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	geo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	geo_write = write(geo, text_content, len);

	if (geo == -1 || geo_write == -1)
		return (-1);

	close(geo);

	return (1);
}
