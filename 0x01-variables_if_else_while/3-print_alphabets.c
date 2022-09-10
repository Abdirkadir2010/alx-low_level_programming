#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Beginning of main function
 *
 * Return: 0 to the system
 */
int main(void)
{
	char capital_letter;
	char small_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		putchar(small_letter);
	for (capital_letter = 'A'; capital_letter <= 'Z' capital_letter++)
		putchar(capital_letter);
	putchar('\n');

	return (0);
}

