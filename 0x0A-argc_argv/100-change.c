#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - beginning of main function
 * @argc: count commands argument
 * @argv: display command argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int tot, change, aux, pos;
	int cents[] = {25, 10, 5, 2, 1};

	tot = 0;
	pos = 0;
	aux = 0;
	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = atoi(argv[1]);

	if (tot <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (; cents[pos] != '\0'; pos++)
	{
		if (tot >= cents[pos])
		{
			aux = (tot / cents[pos]);
			change += aux;
			tot -= cents[pos] * aux;
		}
	}
	printf("%d\n", change);
	return (0);
}
