#include "main.h"

/**
 * _isupper - Function perform uppercase
 * @c: Charcter to be print
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
