#include "main.h"

/**
 * sqrt2 -  returns the natural square root of a number
 *
 * @n: an integer
 * @i: an integer
 *
 * Return: the natural square root of n
 */
int sqrt2(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt2(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: an integer
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt2(n, 0));
}
