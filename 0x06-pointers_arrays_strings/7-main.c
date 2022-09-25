#include "main.c"
#include <stdio.h>

/**
 * main - Beginning of main function
 *
 * Return: always 0 to system
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
