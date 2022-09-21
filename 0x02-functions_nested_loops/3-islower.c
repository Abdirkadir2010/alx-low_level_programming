#include "main.h"
#include <stdio.h>

/**
 * _islower - function that checks loweralphabet
 * @c: input character
 *
 * Return: always return success
 */
int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
		c++;
	}
	return (0);
}
