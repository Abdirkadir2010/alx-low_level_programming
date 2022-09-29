#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * checks_palindrome - palindrome
 * @s: input string
 * @l: pos of string
 * Return: boolena
 */
int checks_palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (checks_palindrome(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: input string
 * Return: recursion function
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checks_palindrome(s, len - 1));
}

