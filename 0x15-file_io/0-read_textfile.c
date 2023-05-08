#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to POSIX stdout.
 * @filename: name of the file.
 * @letters: number of letters
 * Return: Always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t geo, geo_read, geo_write;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	geo = open(filename, O_RDONLY);
	geo_read = read(geo, buff, letters);
	geo_write = write(STDOUT_FILENO, buff, geo_read);

	if (geo == -1 || geo_read == -1 || geo_write == -1 || geo_write != geo_read)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(geo);

	return (geo_write);
}
