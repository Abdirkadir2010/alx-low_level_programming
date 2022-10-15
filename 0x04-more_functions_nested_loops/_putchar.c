#include <unistd.h>
/**
 * _putchar - write the character to stdout
 * @c: input character
 * Return: 1 to success
 * 		-1 to error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
