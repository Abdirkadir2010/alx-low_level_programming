#include <unistd.h>
#include "main.h"
#include "stdio.h"

/**
 * _putchar - write the character to the stdout
 * @c: the charcter to be printed
 *
 * Return: 1 on success and -1 when error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
