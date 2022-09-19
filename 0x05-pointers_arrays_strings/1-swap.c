#include "main.h"

/**
 * swap_int - swap t function of two values of varibale
 * @a: first parameters
 * @b: second parameters
 */
void swap_int(int *a, int *b)
{
	int swapval;

	swapval = *a;

	*a = *b;

	*b = swapval;
}
