#include "main.h"

/**
 * print_most_numbers - Function that print numbers
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
