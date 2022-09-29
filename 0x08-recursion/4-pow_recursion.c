#include "main.h"

/**
 * calc_pow - calculate function sqrt
 * @i: interger
 * @n: interger
 * Return: evaluate sqrt
 */
int _calc_pow(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (calc_pow(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
}
/**
 * _pow_recursion - evaluate sqrt
 * @x: interger num
 * @y: integer num
 * Return: Sgrt_recursion
 */
int _pow_recursion(int x, int y);
{

	if (y < 0)
		return (-1);
	else
	{
		return (calc_pow(x, y)); 
	}
}

