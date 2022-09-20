#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * puts_half - prints half of string
 *@str: input strings
 *
 * Returns: Nothing(void)
 */
void puts_half(char *str)
{
	int j, mid, len;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	len = strlen(str);
	mid = len / 2;

	if (len % 2 == 1)
		mid++;
	else
		mid = len / 2;
	j = mid;
	while (j < len)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
