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
	int strlen, j = 0;

	strlen = _strlen(str);

	while (j < strlen)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}

