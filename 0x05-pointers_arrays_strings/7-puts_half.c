#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * puts_half - prints half of string
 *@str: input strings
 *
 * Returns: Nothing(void)
 */
void puts_half(char *str)
{
	int j, mid;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	mid = j / 2;

	if (mid % 2 == 1)
		mid++;
	while (mid < j)
	{
		putchar(str[mid - 1]);
		mid++;
	}
	putchar(str[j-1]);
	putchar('\n');
}
