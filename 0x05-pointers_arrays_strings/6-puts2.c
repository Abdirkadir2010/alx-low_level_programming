#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * puts2 - prints charcter in the string
 * @str: pointer to string
 *
 * Return: Nothing(void)
 */
void puts2(char *str)
{
	int j = 0;

	while (j >= 0)
	{
		if (str[j] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

