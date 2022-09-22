#include "main.h"
#include <stdio.h>

/**
 * times_table - print time table
 *
 * Return: Nothing (void)
 */
void times_table(void)
{
	int j, k, result;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');

		for (k = 0; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');


			result = (j * k);

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
