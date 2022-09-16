#include <stdlib.h>
#include <stdio.h>

/**
 * main - beginning of main function prints the lowercase alphabet
 *
 * Return: 0 to the system
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
