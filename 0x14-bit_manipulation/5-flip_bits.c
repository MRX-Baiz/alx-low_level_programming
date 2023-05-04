#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m, rslt = 1;
	unsigned int a, b = 0;

	for (a = 0 ; a < 64 ; a++)
	{
		if (rslt == (d & rslt))
			b++;
		rslt <<= 1;
	}
	return (b);
}
