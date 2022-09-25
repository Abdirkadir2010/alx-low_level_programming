#include "main.h"

/**
 *
 *
 */
char *string_toupper(char *)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j -= 32;
		}
		j++;
	}
	return (str);
}
