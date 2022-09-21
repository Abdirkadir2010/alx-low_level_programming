#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function returns alphabets
 *
 * Return: Nothing (void)
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}
