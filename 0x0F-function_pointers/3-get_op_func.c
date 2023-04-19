#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - function that selects the 
  * correct function to perform the operation
  * @s: operator passed
  * Return: Always 0.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int rit = 0;

	while (rit < 5)
	{
		if (strcmp(s, ops[rit].op) == 0)
			return (ops[rit].f);

		rit++;
	}

	return (0);
}
