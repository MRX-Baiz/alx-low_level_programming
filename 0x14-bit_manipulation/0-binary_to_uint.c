#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 *	if there is one or more chars in the string that is not 0 or 1
 *		b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (a = 0 ; b[a] != '\0' ; a++)
	{
		if (b[a] != '1' && b[a] != '0')
			return (0);
	}
	for (a = 0 ; b[a] != '\0' ; a++)
	{
		dec <<= 1;
		if (b[a] == '1')
			dec += 1;
	}
	return (dec);
}
