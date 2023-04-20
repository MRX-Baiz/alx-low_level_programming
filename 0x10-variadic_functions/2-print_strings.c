#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings
 * @...: strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list list;

	if (!n)
		printf("\n");
	va_start(list, n);
	while (i--)
		printf("%s%s", (s = va_arg(list, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(list);
}
