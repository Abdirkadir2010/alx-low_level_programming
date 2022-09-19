#include "main.h"

/**
 * _puts - the function print the string
 * @str: an input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
