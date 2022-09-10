#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Beginning of main function
 *
 * Return: o to the system
 */
int main(void)
{
	char small_alphabet;

	for (small_alphabet = 'a'; small_alphabet <= 'z'; small_alphabet++)
	{
		putchar(small_alphabet);
		putchar('\n');
	}

	return (0);
}
