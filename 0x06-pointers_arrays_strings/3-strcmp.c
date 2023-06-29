#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
