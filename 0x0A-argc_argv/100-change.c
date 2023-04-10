#include "main.h"

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: represent argument counter
 * @argv: argument
 * Return: Always 0 if no errors,
 */

int main(int argc, char *argv[])
{
	int r, g = 0, m, e;
	int a[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	r = atoi(argv[1]);
	if (r <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (m = 0; m < 5; m++)
		{
			e = r / a[m];
			r -= e * a[m];
			g += e;
			if (r == 0)
			break;
		}
	}
	printf("%d\n", g);
	return (0);
}
