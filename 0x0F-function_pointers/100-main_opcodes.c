#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - this function prints the opcodes of this program
 * @a: the address of the main function
 * @n: the number of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int geo;

	for (geo = 0; geo < n; geo++)
	{
		printf("%.2hhx", a[geo]);
		if (geo < n - 1)
		{
			printf(" ");
		}
		printf("\n");
	}

/**
 * main - this function prints the opcodes of its own main function
 * @argc: the number of arguments passed to the function
 * @argv: an array of pointers to arguments
 * Return: Always 0.
 **/
int main(int argc, char **argv)
{
	int rit;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	rit = atoi(argv[1]);
	if (rit < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *) &main, rit);
	return (0);
}
