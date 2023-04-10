#include "main.h"

/**
 * main - program that add two positive numbers
 * @argc: represent argument counter
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int r, g, pos_num = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (r = 1; r < argc; r++)
	{
		for (g = 0; argv[r][g]; g++)
		{
			if (!isdigit(argv[r][g]))
			{
				printf("Error\n");
				return (1);
			}
		}
		pos_num += atoi(argv[r]);
	}
	printf("%d\n", pos_num);
	return (0);
}
