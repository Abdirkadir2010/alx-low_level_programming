#include <stdio.h>
#include <stdlib.h>

/**
 * main - Beginning of main function
 *
 * Return: 0 to the system
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 0;

	while (num1 < 8)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 == 7 && num2 == 8 && num3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
