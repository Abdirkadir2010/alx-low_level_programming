#include "main.h"

/**
 * reverse_array - function reverse the contents of array
 * @a: input array
 * @n: number of elements to be swapped
 *
 * Return: Nothing(void)
 */
void reverse_array(int *a, int n)
{
	int j, temp;

	for (j = n - 1; j > n / 2; j--)
	{
		temp = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = temp;
	}
}
