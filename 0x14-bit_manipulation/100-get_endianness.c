#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: Always
 */
int get_endianness(void)
{
	int geo;
	char *rit;

	geo = 1;
	rit = (char *)&geo;

	return (*rit);
}
