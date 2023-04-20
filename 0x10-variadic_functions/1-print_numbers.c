#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 * @...: int to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list list;

	if (!n)
		printf("\n");
	va_start(list, n);
	while (i--)
		printf("%d%s", va_arg(list, int),
				i ? (separator ? separator : "") : "\n");
	va_end(list);
}
