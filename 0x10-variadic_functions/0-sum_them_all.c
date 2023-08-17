#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Unsigned Integer used
 *
 * Return: 0 if n equals 0
 * sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
