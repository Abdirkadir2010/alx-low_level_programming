#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function that prints decimal number less than 10
 *
 * Return: 0 to the system
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
