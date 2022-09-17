#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function that prints hexadecimal numbers
 *
 * Return: 0 to the system
 */
int main(void)
{
	int num;
	char c;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
