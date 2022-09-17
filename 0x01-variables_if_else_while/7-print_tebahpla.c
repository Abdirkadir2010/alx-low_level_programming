#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function that prints lowercase alphabet in reverse
 *
 * Return: 0 to the system
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
