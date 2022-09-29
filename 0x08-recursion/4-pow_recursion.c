#include "main.h"

/**
 * calc_pow - calculate function sqrt
 * @i: interger
 * @n: interger
 * Return: return number
 */
int calc_pow(int i, int n)
{
	if (n == 1)
		return (i);
	if (n == 0)
		return (1);
	else
		return (i * calc_pow(i, n - 1));
}
/**
 * _pow_recursion - evaluate sqrt
 * @x: interger num
 * @y: integer num
 * Return: Sgrt_recursion
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	return (calc_pow(x, y));
}
