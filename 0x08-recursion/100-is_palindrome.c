#include "main.h"
/**
 * _strlen_recursion - prints length of string
 * @s: String
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * palin_check - palindrome checker
 * @s: address of string
 * @r: right index
 * @l: left index
 * Return: value of 1 if paindrome or 0 if not
 */
int palin_check(char *s, int r, int l)
{
	if (s[r] == s[l])
		if (r > l / 2)
		{
			return (1);
		}
		else
		{
			return (palin_check(s, r + 1, l - 1));
		}
		else
			return (0);
}
/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: address of string
 * Return: value of 1 if prime or 0 if not
 */
int is_palindrome(char *s)
{
	return (palin_check(s, 0, _strlen_recursion(s) - 1));
}
