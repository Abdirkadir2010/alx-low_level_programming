#include "main.h"

/**
 * *leet - that encodes a string into 1337
 *
 */
char *leet(char *)
{
	int j = 0;

	while (str [j]  != '\0')
	{
		str[j] = transform(str[j]);
		j++;
	}
	return (str);
}

// second function in task 6
char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0','e', 'a', '\0','\0','t'};
	char mappping_upper[8] = {'O','L','\0', 'E', 'A','\0', '\\0','T'};

	int i = 0;
	char replacement = x;
	while (i < 8)
	{
		if (x == mapping_low[j] || x == mapping_upper[j])
		{
			replacement = j '0';
			break;
		}
		j++;
	}
	return (replacement);
}
