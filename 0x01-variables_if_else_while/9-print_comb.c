#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function
 *
 * Return: 0 to the system
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
