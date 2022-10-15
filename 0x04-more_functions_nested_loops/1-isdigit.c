#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that perform to check digit or not
 * c: variable that checked
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
