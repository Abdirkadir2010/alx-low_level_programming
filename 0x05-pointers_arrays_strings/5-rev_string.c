#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string -  function taht reverses the string
 * @s: pointer to string
 *
 * Return: nothing(void)
 */

void rev_string(char *s)
{
	int j;

	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
