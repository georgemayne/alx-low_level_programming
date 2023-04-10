#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: represent argument counter
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int r, g;

	r = 1;
	g = 2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[r]) * atoi(argv[g]));
	return (0);
}
