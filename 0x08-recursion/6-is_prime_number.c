#include "main.h"

/**
 * _prime - a function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: integer
 * @i: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
                return (0);
	else
		return (_prime(n, i + 1));
}
/**
 * is_prime_number - a function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}
