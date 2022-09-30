#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * num_check_fun - check the string that are not digit
 * @s: input string
 *
 * Return: 0
 */
int num_check_fun(char *s)
{
	unsigned int c;

	for (c = 0; c < strlen(s); c++)
	{
		if (!isdigit(s[c]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - beginning of main function
 * @argc: count command argument
 * @argv: display commands argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (num_check_fun(argv[i]))
		{
			j = atoi(argv[i]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}


