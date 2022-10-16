#include <stdio.h>
/**
 * main - beginning of main function
 *
 * Return: 0
 */
int main(void)
{
	int j = 1;

	while (j <= 100)
	{
		if (j % 3 == 0 && j % 5 == 0)
			printf("FizzBuzz");
		else if (j % 3 == 0)
			printf("Fizz");
		else if (j % 5 == 0)
			printf("Buzz");
		else
			printf("%d", j);
		printf(" ");
		j++;
	}
	printf("\n");
	return (0);
}
