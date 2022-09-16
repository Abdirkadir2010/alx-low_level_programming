#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function
 *
 * Return: 0 to the system
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
