#include "main.h"
#include <string.h>

/**
 * print_rev - reverse printing the string
 * @s: the string parameters
 */
void print_rev(char *s)
{
	int n, j;

	n = strlen(s);

	for (j = n - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
