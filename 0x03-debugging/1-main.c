#include <stdio.h>

/**
 * main - causes an infinitive loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	/**
	 * while (i < 10) - the loop that makes an infinitive loop
	 * {
	 * 	putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");
	
	return (0);
}
