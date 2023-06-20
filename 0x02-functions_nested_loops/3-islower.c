#include "main.h"

/**
 *  _islower -  a function that checks for lowercase character
 *
 * @c: character to be checked
 *
 *  Return: returns 1 if 'c' is lowercase
 *          otherwise returns 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
