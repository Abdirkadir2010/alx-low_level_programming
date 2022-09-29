#include "main.h"
/**
 * checks_prime_num - recursion loop
 * @num: num
 * @t: number to iterate
 * Return: return 1 or 0
 */
int checks_prime_num(int num, int t)
{
	if (num % t == 0)
	{
		if (num == t)
			return (1);
		else
			return (0);
	}
	return (0 + checks_prime_num(num, t + 1));
}
/**
 * is_prime_number - evaluate prime or not
 * @n: number
 * Return: return 1 prime - return 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checks_prime_num(n, 2));
}
