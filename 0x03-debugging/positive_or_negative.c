#include "main.h"
#include <stdlib.h>

/**
 * positive_or_negative - function that print neg or pos number
 *
 * Return: nember
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
