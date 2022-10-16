#include "main.h"

/**
 * more_numbers - print number 0 upt 14, 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int j, i;

	j = 0;

	while (j <= 9)
	{
		for(i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
