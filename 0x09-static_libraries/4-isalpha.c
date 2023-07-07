#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase
 *         otherwise returns 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
