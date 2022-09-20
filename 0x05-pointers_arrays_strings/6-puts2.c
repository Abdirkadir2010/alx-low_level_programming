#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - prints charcter in the string
 * @str: pointer to string
 *
 * Return: Nothing(void)
 */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			putchar(str[j]);
		}
		j++;
	}
		putchar('\n');
}
