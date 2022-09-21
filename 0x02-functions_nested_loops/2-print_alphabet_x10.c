#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - function in lower case 10 times
 *
 * Return: Nothing(void)
 */
void print_alphabet_x10(void)
{
	int j = 0;

	char i;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}

