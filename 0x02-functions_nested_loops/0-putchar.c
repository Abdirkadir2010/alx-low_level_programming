#include <unistd.h>
#include "main.h"

/**
 * main - Beginning of main function
 *
 * Description: 'This program about putchar function'
 *
 * Return: 0 to the system
 */
int main(void)
{
	char c[8] = "_putchar";

	int j;

	for (j = 0; j <= 7; j++)
		_putchar(c[j]);
	_putchar('\n');
	return (0);
}
