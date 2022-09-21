#include "main.h"
#include <stdio.h>

/**
 * _abs - compute absolute value
 * @n: input number
 *
 * Return: success
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
