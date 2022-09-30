#include "main.h"
#include <stdio.h>
/**
 * main - beginning of main unction
 * @argc: count the command arguments
 * @argv: display the commands argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0; /* the variables that uses to count */

	if (argc > 0)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
