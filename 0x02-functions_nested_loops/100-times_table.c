#include "main.h"
#include <stdio.h>
/**
 * print_times_table - beginning of function
 * @n: input numbers
 *
 * Return: void (Nothing)
 */
void print_times_table(int n)
{
	int j, k, result;

	j = 0;

	if (n >= 0 && n <= 15)
	{
		while (j <= n)
		{
			_putchar('0');

			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');

				result = j * k;

				if (result <= n)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
			j++;
		}
	}
}
