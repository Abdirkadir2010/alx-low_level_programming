#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - the function print the string
 * @str: an input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
