#include <stdio.h>

/**
 * main - beginning of main function
 *
 * Return: 0 to the system
 */
int main(void)
{
	int num1, num2;

	num1 = 0;

	while (num1 <= 98)
	{
		for (num2 = num1 + 1; num2 <= 98; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
