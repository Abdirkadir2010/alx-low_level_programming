#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - function that prints negative or positive
 *
 * Return: the number
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}