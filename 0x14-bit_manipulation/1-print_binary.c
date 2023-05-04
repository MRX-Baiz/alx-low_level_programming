#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, i = 0;
	unsigned long int b;

	for (a = 63 ; a >= 0 ; a--)
	{
		b = n >> a;
		if (b & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
