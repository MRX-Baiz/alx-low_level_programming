#include "main.h"

/**
 * check - for square root
 * @i: int
 * @j: int
 * Return: int
 */

int check(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
