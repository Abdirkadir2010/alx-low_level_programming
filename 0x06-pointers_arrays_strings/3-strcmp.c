#include "main.h"

/**
 *
 * *_strcmp - compare two strings
 * @s1: a pointer to character to to be compared
 * @s2: a pointer to character to be compared
 *
 * Return: compared string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
