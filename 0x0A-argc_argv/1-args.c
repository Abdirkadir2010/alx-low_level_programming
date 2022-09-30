#include "main.h"
#include <stdio.h>

/**
 * main - beginning o main function
 * @argc: Number of commands
 * @argv: commands
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
