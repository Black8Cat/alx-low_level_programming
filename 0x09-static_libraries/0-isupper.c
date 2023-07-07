#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: returns 1 if c is lowercase
 *	   otherwise returns 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
