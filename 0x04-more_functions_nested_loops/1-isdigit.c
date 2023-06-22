#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 *
 * @c: a digit to be checked
 *
 * Return: returns 1 if c is a digit
 *         otherwise returns 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
