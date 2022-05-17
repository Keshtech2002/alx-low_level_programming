#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: variable number of paramters to calculate the sum of.
 *
 * Return: 0 if n == 0, Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i, sum = 0;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(parameters, int);
	}

	va_end(parameters);

	return (sum);
}
