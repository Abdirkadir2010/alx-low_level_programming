#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib>

/**
 * encode - function to transrom
 * @x: input string
 *
 * Return: transormed characters
 */
char encode(char x)
{
	mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0','T'};

	int i = 0;

	char rep = x;

	while(i < 8)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			rep = i + '0';
			break;
		}
		i++;
	}
	return (rep);
}
