#include <stdlib.h>
#include <stdio.h>

/**
 * main - beginning of main function prints the lowercase alphabet except q & e
 *
 * Return: 0 to the system
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
