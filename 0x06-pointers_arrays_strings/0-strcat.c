#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strcat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 *
 *Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int des_len = strlen(dest);

	des_len++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[des_len] = src[j];
		des_len++;
	}
	dest[des_len] = '\0';
	return (dest);
}
