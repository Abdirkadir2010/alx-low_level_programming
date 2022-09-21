#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints each minutes in the hours
 *
 * Return: Nothing(void)
 */
void jack_bauer(void)
{
	int hours, min;

	min = 0;
	
	for (hours = 0; hours < 24; hours++)
	{
		while (min < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
	}
}
