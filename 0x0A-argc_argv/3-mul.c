#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - beginning of main function
 * @argc: count command argument
 * @argv: display commands argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, Result;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		Result = i * j;
		printf("%d\n", Result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
