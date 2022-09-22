#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n number up to 98
 * @n: input number
 *
 * Return: Nothing(void)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			n--;
			_putchar((n / 10 ) + '0');
		}
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			n++;
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
