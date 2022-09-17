#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function
 *
 * Return: 0 to the system
 */
int main(void)
{
	int num1, num2;

	num1 = '0';

	while (num1 <= '8')
	{
		for (num2 = '1'; num2 <= '9'; num2++)
		{
			if (!(num1 > num2))
			{
				putchar(num1);
				putchar(num2);
				if (num1 != '8' || num2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num1++;
	}
	putchar('\n');
	return (0);
}

