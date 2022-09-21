#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - function that copy the string
 * @dest: to where
 * @src: from where
 *
 * Return: the pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j++] = '\0';

	return (dest);
}
