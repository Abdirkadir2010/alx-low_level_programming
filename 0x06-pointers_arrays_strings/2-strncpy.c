#include "main.h"
#include <string.h>

/**
 * *_strncpy - Copy the the n strings
 * @dest: To where the string copied
 * @src: from where the string copied
 * @n: n number of string to be copied
 *
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len1 = 0;
	char *str2 = dest;
	char *str1 = src;

	while (*src)
	{
		len1++;
		src++;
	}
	len1++;

	if (n > len1)
		n = len1;
	src = str1;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (str2);
}
