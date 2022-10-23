#include "main.h"

/**
 * _strlen - count arrray function
 * @s: pointers
 *
 * Return: length of array
 */
int _strlen(char *s)
{
	unsigned int str_len;

	i = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: Array two
 *
 * Return: Always an array dinamic
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = (_strlen(s1) + _strlen(s2) + 1);

	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dest + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dest + i) = *(s2 + j);
		i++;
	}
	return (dest);
}
