#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rev_string -  function taht reverses the string
 * @s: pointer to string
 *
 * Return: nothing(void)
 */
void rev_string(char *s)
{
	int c = 0, i, j;

	char *str, tmp;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	str = s;

	for (i = 0; i < (c - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = tmp;
		}
	}
}
