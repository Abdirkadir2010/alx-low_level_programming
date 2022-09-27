#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	int j = 0, i;

	while (s[j])
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (c == s[i])
		{
			s += i;
			return (s);
		}
	}
	return (NULL);
}
