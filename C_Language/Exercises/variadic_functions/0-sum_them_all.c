#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argument_list;
	unsigned int i;
	int sum_total = 0;

	va_start(argument_list, n);

	for (i = 0; i < n; i = i + 1)
		sum_total = sum_total + va_arg(argument_list, int);

	va_end(argument_list);

	return (sum_total);
}
