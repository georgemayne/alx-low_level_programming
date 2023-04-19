#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns the sum
  * @a: ...
  * @b: ...
  * Return: Always
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference
  * @a: ...
  * @b: ...
  * Return: Always
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product
  * @a: ...
  * @b: ...
  * Return: Always
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the the result of division
  * @a: ...
  * @b: ...
  * Return: Always
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - returns the remainder
  * @a: ...
  * @b: ...
  * Return: Always
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
