#include "main.h"

/**
 * binary_to_uint - binary convert fun
 * @b: input binary num
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_num;

	if (!b)
		return (0);
	fo (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[j] - '0');
	}
	return (dec_num);
}
