#include "main.h"

/**
 * main - Beginning of main function
 * _putchar - system function
 *
 * Description: ' This program about putchar function'
 *
 * Returns: 0 to the system
 */
int main(void)
{
	char putc[] = "_putchar";

	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
