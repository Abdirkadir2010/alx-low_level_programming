#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_array - prints array
 * @a: input array elements
 * @n: number of array elements
 *
 * Returns: Nothing(void)
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(",");
			printf(" ");
		}
		j++;
	}
	printf("\n");
}
