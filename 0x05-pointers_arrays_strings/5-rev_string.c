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
	int len;

	len = strlen(s);
	
	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}
