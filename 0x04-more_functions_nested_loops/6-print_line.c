#include "main.h"

/**
 * print_line - function lines
 * @n: input numbers
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int linelength = 0;

	if (n > 0)
	{
		while (linelength < n)
		{
			_putchar('_');
			linelength++;
		}
	}
		_putchar('$');
		_putchar('\n');
}
