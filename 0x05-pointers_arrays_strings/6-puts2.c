#include "main.h"

/**
 * puts2 - prints charcter in the string
 * @str: pointer to string
 *
 * Return: Nothing(void)
 */
void puts2(char *str)
{
	int j = 0;
	int i = 0;

	while (str[j] != '\0')
		j++;
	j = j - 1;

	while (i <= j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
