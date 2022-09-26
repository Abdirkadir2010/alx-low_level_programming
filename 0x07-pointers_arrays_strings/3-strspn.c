#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	char *t = accept;

	while (*s)
	{
		j = 0;

		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				j = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = t;

		if (j == 0)
			break;
	}
	return (i);
}
