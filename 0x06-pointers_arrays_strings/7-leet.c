#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * *leet - that encodes a string into 1337
 * @str: strings
 *
 * Return: charcters
 */
char *leet(char *str)
{
	int j = 0, i = 0;

	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};

	while (str [j]  != '\0')
	{
		while (i < 0)
		{
			if (str[j] == mapping_low[i] || str[j] == mapping_upper[i])
			{
				str[j] = mapping_low[i];
				break;
			}
			else if (str[j] == mapping_upper[i])
			{
				str[j] = mapping_upper[i];
				break;
			}
			i++;
		}
		j++;
	}
	return (str);
}
