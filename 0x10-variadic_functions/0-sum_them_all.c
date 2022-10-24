#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  Sum all parametrs
 * @n: The number of paramters
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int index, sum = 0;

	va_start(p, n);
	if (n == 0)
		return (0);
	else
	{
		for (index = 0; index < n; index++)
		{
			sum += va_arg(p, int);
		}
		va_end(p);
		return (sum);
	}
}
