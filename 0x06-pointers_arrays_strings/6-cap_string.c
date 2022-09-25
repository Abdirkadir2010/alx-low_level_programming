#include "main.h"

/**
 * *cap_string - capitalize string
 *
 * Return: Return the string
 */
char *cap_string(char *)
{
	int j = 0;

	int len = strlen(str);
	while (str[j] != 0; j < len)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] -= 32;
		}
		else
			str[j] = str [j];
		j++;
	}
	return (str);
}
