#include "main.h"
#include <stdio.h>

/**
 * print_sign - print the sign of numbers
 * @n: input numbers
 *
 * Return: success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
