#include "main.h"

/**
 * calc_sqr -Calculates square root of a number
 * @a: interger
 * @b: interger
 * Return: Squre root of number
 */
int calc_sqr(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (0 + calc_sqr(a, b + 1));
}
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: interger
 * Return: Sgrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return  (0);
	if (n == 1)
		return (1);
	return (calc_sqr(n, 2));
}
