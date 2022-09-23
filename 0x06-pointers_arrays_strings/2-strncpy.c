#include "main.h"

/**
 * _strncpy - Copy the the n strings
 * @dest: To where the string copied
 * @src: from where the string copied
 * @n: n number of string to be copied
 *
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i = 0;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
