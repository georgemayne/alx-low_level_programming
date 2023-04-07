#include "main.h"
/**
 * str_check - check for identical strings.
 * @str1: string_1
 * @str2: string_2
 * @l: left index
 * @r: special index
 * Return: 1 if  palindrome or 0 if  otherwise.
 */
int str_check(char *str1, char *str2, int l, int r)
{
	if (str1[l] == '\0' && str2[r] == '\0')
	{
		return (1);
	}
	if (str1[l] == str2[r])
	{
		return (str_check(str1, str2, l + 1, r + 1));
	}
	if (str1[l] == '\0' && str2[r] == '*')
	{
		return (str_check(str1, str2, l, r + 1));
	}
	if (str2[r] == '*')
	{
		return (str_check(str1, str2, l + 1, r) || str_check(str1, str2, l, r + 1));
	}
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: string
 * @s2: string
 *
 * Return: value 1 if  identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
