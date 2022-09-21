#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last number of the digit
 * @n: input number
 *
 * Return: success
 */
int print_last_digit(int n)
{
	int lastd = (n % 10);

	if (lastd < 0)
		lastd = (-1 * lastd);
	_putchar(lastd + '0');
	return (lastd);
}
