#include "main.h"
#include <stdio.h>

/**
 * _isalpha - returns alphabetical characters
 * @c: character to be chacked
 *
 * Return: success
 */
int _isalpha(int c)
{
	while (c >= 'A' && c <= 'z')
	{
		return (1);
		c++;
	}
	return (0);
}
