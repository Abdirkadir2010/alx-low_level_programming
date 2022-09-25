#include "main.h"

/**
 * *string_toupper - function that change all lower case to the uppercase
 * @str: return string
 *
 * Return: character
 */
char *string_toupper(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] -= 32;
		}
		j++;
	}
	return (str);
}
