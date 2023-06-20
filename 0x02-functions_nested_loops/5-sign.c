#include "main.h"

/**
 * print_sign -  a function that prints the sign of a number
 *
 * @n: a number to be checked
 *
 * Return: returns 1 and prints + if n is greater than zero
 *         returns 0 and prints 0 if n is zero
 *         returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		-putchar(45);
		return (-1);
	}
}
