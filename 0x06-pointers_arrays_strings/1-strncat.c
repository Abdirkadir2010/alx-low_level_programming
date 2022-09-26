#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strncat - concatenate two strings to certain n numbers.
 * @dest: dstination string
 * @src: source string
 * @n: concatenate n numbers
 *
 * Return: some strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
