#include <unistd.h>
#include "main.h"

/**
 * _putchar - charcters to the stdout
 * @c: character to be write
 *
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
