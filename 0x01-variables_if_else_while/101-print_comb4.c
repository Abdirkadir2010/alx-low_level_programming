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

	num1 = '0';

	while (num1 <= '7')
	{
		for (num2 = '0'; num2 <= 8; num2++)
		{
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				if (!(num1 >= num2) && !(num1 >= num3) && !(num2 >= num3))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != '7' && num2 != '8' && num3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		num1++;
	}
	putchar('\n');
	return (0);
}

