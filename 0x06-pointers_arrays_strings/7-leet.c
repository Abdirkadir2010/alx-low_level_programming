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
	int i, j = 0;
	int lower_mapping[] = {97, 101, 111, 116, 108};
	int upper_mapping[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (str[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == lower_mapping[i] || str[j] == upper_mapping[i])
			{
				str[j] = n[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
