#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - copies the content of a file into another file
 *@argv: input
 *@argc: quantity
 *Return: Always
 */

int main(int argc, char *argv[])
{
int geo, geo_to;
int check_in, check_out;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
exit(97);
}
geo = open(argv[1], O_RDONLY);
if (geo == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
argv[1]), exit(98);
}
geo_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (geo_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
exit(99);
}
check_in = check_out = 1;
while (check_in)
{
check_in = read(geo, buff, 1024);
if (check_in == -1)
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]),
exit(98);
if (check_in > 0)
{
check_out = write(geo_to, buff, check_in);
if (check_out == -1)
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]),
exit(99);
}
}
check_out = close(geo);
if (check_out == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", geo),
exit(100);
check_out = close(geo_to);
if (check_out == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", geo_to),
exit(100);
return (0);
}
