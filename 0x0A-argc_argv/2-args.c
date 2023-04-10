#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: represent argument counter
 * @argv: argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int r;

	r = 0;
	while (r < argc)
	{
		printf("%s\n", argv[r]);
		r++;
	}
	return (0);
}
