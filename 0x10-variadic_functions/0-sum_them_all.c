#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of arg
 * @...: integers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	while (i--)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
